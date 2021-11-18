/*
 * File:   main.c
 * Author: Atef
 *
 * Created on November 1, 2021, 9:19 PM
 */


// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>
#include "config.h"
#include "LCD.h"
#include <pic16f877a.h>


void main(void) {

    init_ADC(_CH1,1,6,_F);
   //setPortDir(_PD,OUT);
   //setPortData(_PD,5);
    
    
    while(1){
       // LCD_write('A');
//       setPortDir(_PD,OUT);
       //setPortData(_PD,0x00);
//       setPinDir(_PC,2,OUT);
//       setPinData(_PC,2,0) ;
       _delay(100);
      // setPinData(_PB,0,1);
//       togglePinData(_PC,2);
//       togglePortData(_PD);
    }
    return;
}
