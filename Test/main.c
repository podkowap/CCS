/* PP 15/05/2023
 * v.0.0.1 changed #include "DSP28_Device.h" to "DSP281x_Device.h" (DSP28_Device.h obsolete?)

Program Example from the book "Programming_and_use_of_TMS320F2812_DSP_to_control_and_regulate_power_electronics_converters" page. 92,  paragraph 5.3.2

To describe the generating of PWM waveforms using the Event Manager Module, here an example program code is explained.
This program sets up the EV timers (TIMER1, TIMER2, TIMER3 and TIMER4) to generate T1PWM, T2PWM, T3PWM, T4PWM and PWM1-12 waveforms.
The waveforms can then be observed using a scope.
This program requires the DSP28 header files.
To compile the program as it is the header files should be added to the program in the CCS.
*/

// Step 1. Include required header files

 // DSP28_Device.h: device specific definitions

#include "DSP281x_Device.h"
unsigned int cnt_loop;
milliseconds=1000;


// Assuming a 150MHz clock frequency

void delay(unsigned int milliseconds)
{
            unsigned long delay_cycles = (unsigned long)milliseconds * 150000; // Each cycle takes 1/150,000 seconds

            while(delay_cycles > 0)
            {
                delay_cycles--;
            }
}

void main(void)

{

//  Step  2.  Initialize  System  Control  registers,  PLL,  WatchDog,  Clocks  to default state:
    // This function is found in the DSP28_SysCtrl.c file.

 InitSysCtrl();

// Step 3. Select GPIO for the device or for the specific application:

    // This function is found in the DSP28_Gpio.c file.

 // Initialize GPIO for this test here

 EALLOW;

 // Enable PWM pins

    GpioMuxRegs.GPAMUX.all = 0x00FF; // EVA PWM 1-6  pins

    GpioMuxRegs.GPBMUX.all = 0x00FF; // EVB PWM 7-12 pins

    EDIS; // Disable PWM pins

// Step 4. Initialize PIE vector table:

 // The PIE vector table is initialized with pointers to shell Interrupt

        //  Service  Routines  (ISR).    The  shell  routines  are  found  in DSP28_DefaultIsr.c.

 // Insert user specific ISR code in the appropriate shell ISR routine in

    // the DSP28_DefaultIsr.c file.

 // Disable and clear all CPU interrupts:

 DINT;
 IER = 0x0000;

 IFR = 0x0000;

 // Initialize Pie Control Registers To Default State:

        // This function is found in the DSP28_PieCtrl.c file.

 InitPieCtrl();

 // Initialize the PIE Vector Table To a Known State:

        // This function is found in DSP28_PieVect.c.

 // This function populates the PIE vector table with pointers

        // to the shell ISR functions found in DSP28_DefaultIsr.c.

 InitPieVectTable();

// EVA Configure T1PWM, T2PWM, PWM1-PWM6

// Step 1  Initialize the timers

 // Initialize EVA Timer1

 EvaRegs.T1PR = 0xFFFF;       // Timer1 period

 EvaRegs.T1CMPR = 0x3C00;     // Timer1 compare

 EvaRegs.T1CNT = 0x0000;      // Timer1 counter

    // TMODE = continuous up/down

 // Timer enable
  // Timer compare enable

 EvaRegs.T1CON.all = 0x1042;

 // Initialize EVA Timer2

 EvaRegs.T2PR = 0x0FFF;       // Timer2 period

 EvaRegs.T2CMPR = 0x03C0;     // Timer2 compare

 EvaRegs.T2CNT = 0x0000;      // Timer2 counter

    // TMODE = continuous up/down

 // Timer enable

 // Timer compare enable

 EvaRegs.T2CON.all = 0x1042;

// Step 2  Setup T1PWM and T2PWM

 // Drive T1/T2 PWM by compare logic

 EvaRegs.GPTCONA.bit.TCMPOE = 1;

 // Polarity of GP Timer 1 Compare = Active low

 EvaRegs.GPTCONA.bit.T1PIN = 1;

 // Polarity of GP Timer 2 Compare = Active high

 EvaRegs.GPTCONA.bit.T2PIN = 2;

// Step 3 Enable compare for PWM1-PWM6

 EvaRegs.CMPR1 = 0x0C00;
 EvaRegs.CMPR2 = 0x3C00;
 EvaRegs.CMPR3 = 0xFC00;

    // Compare action control.  Action that takes place on a compare event

    // output pin 1 CMPR1 - active high

    // output pin 2 CMPR1 - active low

    // output pin 3 CMPR2 - active high

    // output pin 4 CMPR2 - active low

    // output pin 5 CMPR3 - active high

    // output pin 6 CMPR3 - active low

    EvaRegs.ACTRA.all = 0x0666;

 EvaRegs.DBTCONA.all = 0x0000; // Disable deadband

    EvaRegs.COMCONA.all = 0xA600;

// EVB Configure T3PWM, T4PWM and PWM7-PWM12

// Step 1 - Initialize the Timers

    // Initialize EVB Timer3

 // Timer3 controls T3PWM and PWM7-12

 EvbRegs.T3PR = 0xFFFF;       // Timer3 period

 EvbRegs.T3CMPR = 0x3C00;     // Timer3 compare
  EvbRegs.T3CNT = 0x0000;      // Timer3 counter

    // TMODE = continuous up/down

 // Timer enable

 // Timer compare enable

 EvbRegs.T3CON.all = 0x1042;

    // Initialize EVB Timer4

    // Timer4 controls T4PWM

 EvbRegs.T4PR = 0x00FF;       // Timer4 period

 EvbRegs.T4CMPR = 0x0030;     // Timer4 compare

 EvbRegs.T4CNT = 0x0000;      // Timer4 counter

    // TMODE = continuous up/down

// Timer enable

 // Timer compare enable

 EvbRegs.T4CON.all = 0x1042;

// Step 2  Setup T3PWM and T4PWM

 // Drive T3/T4 PWM by compare logic

 EvbRegs.GPTCONB.bit.TCMPOE = 1;

    // Polarity of GP Timer 3 Compare = Active low

 EvbRegs.GPTCONB.bit.T3PIN = 1;
 // Polarity of GP Timer 4 Compare = Active high

 EvbRegs.GPTCONB.bit.T4PIN = 2;

// Step 3  Enable compare for PWM7-PWM12

 EvbRegs.CMPR4 = 0x0C00;

 EvbRegs.CMPR5 = 0x3C00;

 EvbRegs.CMPR6 = 0xFC00;

    // Compare action control.  Action that takes place on a compare event

    // output pin 1 CMPR4 - active high

    // output pin 2 CMPR4 - active low

    // output pin 3 CMPR5 - active high

    // output pin 4 CMPR5 - active low

    // output pin 5 CMPR6 - active high

    // output pin 6 CMPR6 - active low

    EvbRegs.ACTRB.all = 0x0666;

 EvbRegs.DBTCONB.all = 0x0000; // Disable dead-band

    EvbRegs.COMCONB.all = 0xA600;

// Step 6. IDLE loop. Loop forever:

//  PWM pins can be observed with a scope.
    for(; ;)
    {
        cnt_loop++;
    }

}
