/* 
 * File:   UART.h
 * Author: Atef
 *
 * Created on November 18, 2021, 8:00 PM
 */

#ifndef UART_H
#define	UART_H

#define Rx_enable    1
#define Tx_enable    1
#define Rx_disable   0
#define Tx_disable   0
void init_uart_master(int BaudRate,int RX_EN,int TX_EN);
void init_uart_slave(int BaudRate,int RX_EN,int TX_EN);
void uart_send(char data);
void uart_send_str(char* str);
void uart_send_Num(int num);

char uart_receive();
#endif	/* UART_H */

