/* 
 * File:   timer.h
 * Author: Atef
 *
 * Created on November 8, 2021, 8:20 PM
 */

#ifndef TIMER_H
#define	TIMER_H
//TIMER MODE
#define     _NORMAL      1
#define     _WDT         0 

//AGE DETACT
#define     HTL          1   
#define     LTH          0   

//CLOCK SORUCE SELECT
#define _EXTERNAL        0
#define _nternal         1

//PRESCLAR SELECT
#define _CLk_2           0
#define _CLk_4           1
#define _CLk_8           2
#define _CLk_16          3
#define _CLk_23          4
#define _CLk_64          5
#define _CLk_128         6
#define _CLk_264         7


//#define INT_TOV       TOIE0     
//#define INT_TOC       OCIE0

//#define ClearOnComp   2
//#define SetOnComp     3


void init_Timer(int mode, int clockSelect);

void Timer_enable_INT(int selectINT);
//void setOutCompare(unsigned char compareValue);
//void setOC0Mode(int OC0_Mode);

#endif	/* TIMER_H */

