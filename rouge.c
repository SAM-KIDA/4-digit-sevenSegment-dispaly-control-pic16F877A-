/*
 * File:   rouge.c
 * Author: nahom
 *
 * Created on September 26, 2023, 12:19 AM
 */
#define _XTAL_FREQ  16000000

#include <xc.h>
#include "display.h"
#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

void main(void) 
{
    ADCON0 = 0;
    ADCON1 = 0X0F;
    OPTION_REGbits.nRBPU = 0;
    TRISD= 0;
    TRISC= 0;
    TRISBbits.TRISB5 = 1;
    PORTD = 0;
    PORTC = 0; 
    while(PORTBbits.RB5 == 1){}
    while(1)
    {
       countD();
       you();
       yes();
       Bigu();
       you();
       can();
       doo();
       it();
     }
    
}
