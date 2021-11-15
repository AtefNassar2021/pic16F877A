/* 
 * File:   LCD.h
 * Author: Atef
 *
 * Created on November 5, 2021, 9:03 PM
 */

#ifndef LCD_H
#define	LCD_H

// HW connection Configurations
#define LCD_data        _PD
#define LCD_data_Dir    _PD

#define LCD_control     _PB
#define LCD_control_Dir _PB

#define  RS              RB0
#define  RW              RB4
#define  EN              RB5
/////////////////////////////////
// Command List
#define _8bit_mode    0x38  // _8bit_mode
#define _D_ON_C_OFF   0x0C  // _Display_ON_Cursor_OFF
#define _Entry_mode   0x06  // Entry Mode
#define _Return_Home  0x02  // Return Home


/////////////////
void init_LCD(void);
void LCD_write(char data);
void LCD_write_str(char* str);
void LCD_write_num(int num);
void LCD_cmd(char cmd);
void LCD_enable();
void LCD_clear();
void LCD_goto(int row, int column);



#endif	/* LCD_H */

