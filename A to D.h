/* 
 * File:   A to D.h
 * Author: Atef
 *
 * Created on November 15, 2021, 8:38 PM
 */

#ifndef A_TO_D_H
#define	A_TO_D_H


#define _CH0       RA0
#define _CH1       RA1
#define _CH2       RA2
#define _CH3       RA3
#define _CH4       RA5
#define _CH5       RE0
#define _CH6       RE1
#define _CH7       RE2

/// References XXXXXXXXXXXXXXXXXXXXUNDECLERD
#define _AREF       0   // 00
#define _AVCC       1   // 01
#define _2_56V      3   // 11
///Prescaler
#define _PRE2      0  // 000
#define _PRE8      1  // 001
#define _PRE32     2  // 010
#define _FRC       3  //(clock derived from the internal A/D RC oscillator)
#define _PRE4      4  // 100 
#define _PRE16     5  // 101
#define _PRE64     6  // 110
//#define _FRC       7  //(clock derived from the internal A/D RC oscillator)

///SPEED
#define _N         1  //NORMAL 4/16/64
#define _F         0  //FAST   2/8/32
void init_ADC(int _ch, int Ref, int Prescaler,int speed);

void ADC_SC();

int ADC_read();

void init_Interrupt_ADC();



#endif	/* A_TO_D_H */

