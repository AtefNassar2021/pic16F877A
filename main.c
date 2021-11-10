/*
 * File:   main.c
 * Author: Atef
 *
 * Created on November 1, 2021, 9:19 PM
 */


#include <xc.h>
#include "config.h"
#include "LCD.h"


void main(void) {

    init_LCD();
   //setPortDir(_PD,OUT);
   //setPortData(_PD,5);
    
    
    while(1){
        LCD_write('A');
       setPortDir(_PD,OUT);
       //setPortData(_PD,0x00);
       setPinDir(_PC,2,OUT);
       setPinData(_PC,2,0) ;
       _delay(100);
      // setPinData(_PB,0,1);
       togglePinData(_PC,2);
       togglePortData(_PD);
    }
    return;
}
