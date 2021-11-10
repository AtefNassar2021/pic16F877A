#include"timer.h"
#include <xc.h>
#include"config.h"

void init_Timer_0(int mode, int clockSelect){
OPTION_REG = 0x00;
    switch (mode) {
        case _WDT:
            OPTION_REG |=(1<<PSA);
            OPTION_REG |=clockSelect;
            break;
        case _NORMAL:
            OPTION_REG &=~(1<<PSA);
            OPTION_REG |=clockSelect;
            break;
        default:
            return ;
    }
}
void Timer_0_enable_INT(int selectINT){
    TMR0IE &= ~(1<<selectINT);
}

void init_Timer_2(int mode, int Prescaler,int postscale){
    T2CON |=(1<<TMR2ON);
    T2CON |= Prescaler;
    T2CON |= postscale; 
}
void Timer_2_enable_INT(int selectINT){
    PIE1 |=(1<<TMR2IE);
}
