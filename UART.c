
#include <xc.h>
#include "config.h"


void init_uart_master(int BaudRate,int RX_EN,int TX_EN){
    
    TXSTA |= (1<<CSRC); //master mode
    TXSTA &=~ (1<<TX9); //TRANSMET #OF BIT
    TXSTA |= (1<<SYNC);  //SYNCRONAS MODE
    RCSTA |=(1<<SPEN);   // Serial Port Enable bit
    RCSTA |=(1<<SREN:);   //Single Receive Enable bit XXXXXX
    
}
void init_uart_slave(int BaudRate,int RX_EN,int TX_EN){

    TXSTA &=~ (1<<CSRC);  //slave mode
    TXSTA &=~ (1<<RX9);   //RESEVE #OF BIT
    TXSTA |= (1<<SYNC);   //SYNCRONAS MODE
    RCSTA |=(1<<SPEN:);   // Serial Port Enable bit
    
}
void uart_send(char data);
void uart_send_str(char* str);
void uart_send_Num(int num);

char uart_receive();