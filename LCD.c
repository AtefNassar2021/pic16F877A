#include"LCD.h"
#include"config.h"


void init_LCD(){
    // Configure IO PIC
    setPortDir(LCD_data_Dir, OUT);
    setPinDir(LCD_control_Dir, RS, OUT);
    setPinDir(LCD_control_Dir, RW, OUT);
    setPinDir(LCD_control_Dir, EN, OUT);
    ////////////////////////////////////
    setPinData(LCD_control, RW, OFF);
    ////////////////////////////////////
    // Configuration LCD 
    _delay(100);
    LCD_clear();
    
    LCD_cmd(_8bit_mode); 
    _delay(100);
    LCD_cmd(_D_ON_C_OFF); 
    _delay(100);
    LCD_cmd(_Entry_mode); 
    _delay(100);
    LCD_cmd(_Return_Home); 

    _delay(500);

}
void LCD_write(char data);
void LCD_write_str(char* str);
void LCD_write_num(int num);
void LCD_cmd(char cmd);
void LCD_enable();
void LCD_clear();
void LCD_goto(int row, int column);