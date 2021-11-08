#include"timer.h"
#include <xc.h>
#include"config.h"

void init_Timer(int mode, int clockSelect){
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
void Timer_enable_INT(int selectINT){
    TMR0IE &= ~(1<<selectINT);
}


