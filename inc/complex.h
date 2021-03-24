/**
 * @file complex.h
 * @author your name (SOBINRAJAN1999@GMAIL.COM)
 * @brief 
 * @version 0.1
 * @date 2021-03-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

/**
 * @brief structure to create complex number.
 * contains two variables:
 * int real - which contians real value
 * float img - which contains imaginary or iota value 
 * 
 */
typedef struct complex_t
{
    int real;
    float img;
}complex_t;

int complex_sum(complex_t *num1,complex_t *num2);
int complex_diff(complex_t *num1,complex_t *num2);
int complex_mul(complex_t *num1,complex_t *num2);
int complex_div(complex_t *num1,complex_t *num2);

#endif