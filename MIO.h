/* 
 * File:   MIO.h
 * Author: Atef
 *
 * Created on November 1, 2021, 9:22 PM
 */

#ifndef MIO_H
#define	MIO_H




 

int isPressed(int portNum, int pinNum);

// PORT LEVEL
void setPortDir(int portNum, int state);
void setPortData(int portNum, int data);
void togglePortData(int portNum);

// PIN LEVEL
void setPinDir(int portNum,int pinNum, int state);
void setPinData(int portNum,int pinNum, int data);
void togglePinData(int portNum, int pinNum);

#endif	/* MIO_H */

