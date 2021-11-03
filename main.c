/*
 * File:   main.c
 * Author: Atef
 *
 * Created on November 1, 2021, 9:19 PM
 */


#include <xc.h>
#include "config.h"

//#define OUT     0
//#define IN      1
void main(void) {
    setPortDir(_PA,OUT);
    //setPinData(_PB,4,1);
    //PORTA=0X3F;
    setPortDir(_PE,OUT);
    setPortDir(_PC,OUT);
    setPortDir(_PD,OUT);
    setPortDir(_PB,OUT);
    setPinDir(_PB,2,OUT);
    setPinDir(_PB,0,IN);
    while(1){
        
        //PORTC=0X3F;
        
    
    //togglePortData(_PB);
    //_delay(100);
    //setPortData(_PE,0X06);
    //setPortDir(_PD,OUT);
    //setPortDir(_PE,OUT);
    //setPortData(_PB,0XFF);
         if(isPressed(_PB,0)){
          _delay(100);
        togglePinData(_PB,2);
    }
         
        }

    
    
    return;
}
