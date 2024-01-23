#include <xc.h>
#include "initcpu.h"

void initcpu(void)
{
	
OSCCON = 0b01101010; // INTOSC 4MHz
OPTION_REG = 0b11111111;

PORTA = 0b00000000; // INPUTS
TRISA = 0b00000000; // direction
LATA  = 0b00000000; // OUTPUTS
ANSELA = 0b00000000; // ANALOG INPUTS
WPUA  = 0b00000000; // pull up resistors
INLVLA = 0b11111111;

PORTB = 0b00000000; // INPUTS
TRISB = 0b00000000; // direction
LATB  = 0b00000000; // OUTPUTS
ANSELB = 0b00000000; // ANALOG INPUTS
WPUB  = 0b00000000; // pull up resistors
INLVLB = 0b11111111;

PORTC = 0b00000000; // INPUTS
TRISC = 0b00000000; // direction
LATC  = 0b00000000; // OUTPUTS
ANSELC =0b00000000; // ANALOG INPUTS
WPUC  = 0b00000000; // pull up resistors
INLVLC = 0b11111111;

ADCON1bits.ADFM = 0; // left
//ADCON0bits.CHS = 0b00001000; // ADC CHANEL 8
ADCON1bits.ADPREF = 0; // VDD+
ADCON1bits.ADNREF = 0; // VSS-
ADCON0bits.ADON = 0; // ADC is ON

}