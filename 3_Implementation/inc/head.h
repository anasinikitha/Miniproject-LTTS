/**
 * @file head.h
 * @author Nikitha 
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEAD_H__
#define __HEAD_H__
/**
 * @brief CNN is a global_variable
 * 
 */
#define CNN 15
/**
 * @brief CBN is a Global_variable
 * 
 */
#define CBN 4
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @param c 
 * @param d 
 */
void window_screen(int a,int b,int c,int d);
/**
 * @brief 
 * 
 * @param x 
 * @param y 
 */
void gotocoordinate(int x,int y);
/**
 * @brief 
 * 
 */
typedef struct
{
    char name[CNN],code[CBN];
    float rate;
    int quantity;
} record;
record stocks;
#endif
