
#include "config.h"
#include "A to D.h"



void init_ADC(int _CH, int Ref, int Prescaler,int speed){
    /*
       ADCON1:
 
        - Select Voltage Reference.  PCFG3 PCFG2 PCFG1 PCFG0 == 0000 
     *                               ALL PORT ANLOG INPUT VDD-VSS
        - Data Adjust. (neglect) == 0 LEFT
        X- Enable Interrupt. (neglect) X
        ADCON0:

        - Enable ADC.
        - Select Channel.
        - Select Prescaler.
     
     */

    ADCON0 = 0x00;  // 00100000
    ADCON0 |= (_CH<<CHS0);  //00000001
        switch (speed) {
        case _N:
               ADCON0 |= (Prescaler<<ADCS0);
               ADCON1 |= (1<<ADCS2);
            break;
        case _F:
               ADCON0 |= (Prescaler<<ADCS0);
               ADCON1 &=~ (1<<ADCS2);
            break;
        default:
            return ;
    }
    ADCON1 |= (1<<ADON);
    
}

void ADC_SC(){
    // Start Conversion.
    ADCON1 |= (1<< 2);   // GO/DONE
}

int ADC_read(){
        // Wait HERE till Flag rises
    while(!(ADON & (1<<ADIF)));
    int data = ADRESL;
    data |= (ADRESH<<8);
    return data;

}

void init_Interrupt_ADC(){
    
//    ? Clear ADIF bit  <PIR1>
//    ? Set ADIE bit    <PIE1>
//    ? Set PEIE bit    <INTCON>
//    ? Set GIE bit     <INTCON>
    
      PIR1 &=~ (1<<ADIF);
      PIE1 |=  (1<<ADIE);
      INTCON |= (1<<PEIE)|(1<<GIE);
}