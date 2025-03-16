#ifndef Keypad.h
#define Keypad.h

 // Define GPIO pins for rows (outputs) and columns (inputs)ui
 #define ROW_PINS  {10, 9,11, 8}  // Row pins configured as outputs
 #define COL_PINS  {2, 27, 22}  // Column pins configured as inputs

bool init_keypad(int *rows, int*);  

char scan_keypad(int *row,int *col);

#endif