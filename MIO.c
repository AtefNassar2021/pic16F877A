#include <xc.h>
#include "config.h"



int isPressed(int portNum, int pinNum){
 switch (portNum) {
        case _PA:
            return (_PA & (1 << pinNum)) ? 1 : 0;
            break;
        case _PB:
            return (_PB & (1 << pinNum)) ? 1 : 0;
            break;
        case _PC:
            return (_PC & (1 << pinNum)) ? 1 : 0;
            break;
        case _PD:
            return (_PD & (1 << pinNum)) ? 1 : 0;
            break;
        case _PE:
            return (_PE & (1 << pinNum)) ? 1 : 0;
            break;
        default:
            return 0;
    }
}

void setPortDir(int portNum, int state){
         if (state) {
        // PORT INPUT
        switch (portNum) {
            case _PA:
                TRISA = 0xFF;
                break;
            case _PB:
                TRISB = 0xFF;
                break;
            case _PC:
                TRISC = 0xFF;
                break;
            case _PD:
                TRISD = 0xFF;
                break;
            case _PE:
                TRISE = 0x07;
                break;    
            default:
                ;

        }
    } else {
        // PORT OUTPUT
        switch (portNum) {
            case _PA:
                TRISA = 0x00;
                break;
            case _PB:
                TRISB = 0x00;
                break;
            case _PC:
                TRISC = 0x00;
                break;
            case _PD:
                TRISD = 0x00;
                break;
            case _PE:
                TRISE = 0x00;
                break;    
            default:
                ;

        }                               
                                        
                                        
    }
}
void setPortData(int portNum, int data){
switch (portNum) {
        case _PA:
            PORTA = data;
            break;
        case _PB:
            PORTB = data;
            break;
        case _PC:
            PORTC = data;
            break;
        case _PD:
            PORTD = data;
            break;
        case _PE:
            PORTE = data;
            break;    
        default:
            ;

    }
}
void togglePortData(int portNum){

switch (portNum) {
        case _PA:
            PORTA ^= 0x3F;
            break;
        case _PB:
            PORTB ^= 0xFF;
            break;
        case _PC:
            PORTC ^= 0xFF;
            break;
        case _PD:
            PORTD ^= 0xFF;
            break;
        case _PE:
            PORTE ^= 0x07;
            break;            
        default:
            ;

    }

}
void setPinDir(int portNum,int pinNum, int state){
if (state) {
        // PORT INPUT
        switch (portNum) {
            case _PA:
                TRISA |= (1 << pinNum);
                break;
            case _PB:
                TRISB |= (1 << pinNum);
                break;
            case _PC:
                TRISC |= (1 << pinNum);
                break;
            case _PD:
                TRISD |= (1 << pinNum);
                break;
            case _PE:
                TRISE |= (1 << pinNum);
                break;                
            default:
                ;

        }
    } else {
        // PORT OUTPUT
        switch (portNum) {
            case _PA:
                TRISA &= ~(1 << pinNum);
                break;
            case _PB:
                TRISB &= ~(1 << pinNum);
                break;
            case _PC:
                TRISC &= ~(1 << pinNum);
                break;
            case _PD:
                TRISD &= ~(1 << pinNum);
                break;
            case _PE:
                TRISE &= ~(1 << pinNum);
                break;                
            default:
                ;

        }
    }
}
void setPinData(int portNum,int pinNum, int data){
if (data) {
        switch (portNum) {
            case _PA:
                PORTA |= (1 << pinNum);
                break;
            case _PB:
                PORTB |= (1 << pinNum);
                break;
            case _PC:
                PORTC |= (1 << pinNum);
                break;
            case _PD:
                PORTD |= (1 << pinNum);
                break;
            case _PE:
                PORTE |= (1 << pinNum);
                break;                
            default:
                ;

        }
    } else {
        switch (portNum) {
            case _PA:
                PORTA &= ~(1 << pinNum);
                break;
            case _PB:
                PORTB &= ~(1 << pinNum);
                break;
            case _PC:
                PORTC &= ~(1 << pinNum);
                break;
            case _PD:
                PORTD &= ~(1 << pinNum);
                break;
            case _PE:
                PORTE &= ~(1 << pinNum);
                break;                
            default:
                ;

        }
    }
}
void togglePinData(int portNum, int pinNum) {
    switch (portNum) {
        case _PA:
            PORTA ^= (1 << pinNum);
            break;
        case _PB:
            PORTB ^= (1 << pinNum);
            break;
        case _PC:
            PORTC ^= (1 << pinNum);
            break;
        case _PD:
            PORTD ^= (1 << pinNum);
            break;
        case _PE:
            PORTE ^= (1 << pinNum);
            break;            
        default:
            ;

    }
}
