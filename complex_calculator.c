/**
 * @file complex_calculator.c
 * @author your name (sobinrajan1999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "inc\complex.h"
#include<stdlib.h>

/**
 * @brief complex_sum will evaluate sum of two complex numbers
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not
 * 1 means arguments are right
 * 0 means there is an error in arguments
 */
int complex_sum(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                             //checking for null value
        printf("Oops wrong values\n");
        return 0;
    }
    complex_t sum;
    sum.real=num1->real + num2->real;
    sum.img=num1->img + num2->img;
    printf("Sum of two complex number is: %d + (%.0f)i\n",sum.real,sum.img);             //output
    return 1;
}

/**
 * @brief complex_diff will evaluate difference of two complex numbers 
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not
 * 1 means arguments are right
 * 0 means there is an error in arguments
 */
int complex_diff(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                   //checking for null value
        printf("Oops wrong values\n");
        return 0;
    }
    complex_t diff;
    diff.real=num1->real - num2->real;
    diff.img=num1->img - num2->img;
    printf("Difference of two complex number is: %d + (%.0f)i\n",diff.real,diff.img);        //output
    return 1;
}

/**
 * @brief complex_mul will evaluate multiplication of two complex numbers 
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not
 * 1 means arguments are right
 * 0 means there is an error in arguments
 */
int complex_mul(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                   //checking for null value
        printf("Oops wrong values\n");
        return 0;
    }
    complex_t mul;
    mul.real=(num1->real*num2->real)-(num1->img * num2->img);
    mul.img=(num1->real * num2->img)+(num1->img * num2->real);
    printf("multiplication of two complex number is: %d + (%f)i\n",mul.real,mul.img);    //output
    return 1;
}

/**
 * @brief complex_diff will evaluate difference of two complex numbers 
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not
 * 1 means arguments are right 
 * 0 means there is an error in arguments or one of the real or imaginary value is 0
 */
int complex_div(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                    //checking for null value
        printf("Oops wrong values\n");
        return 0;
    }
    int a,b,c;
    if(num2->real == 0 && num2->img == 0){             //check if there are any zero value
      printf("Division by 0 + 0i isn't allowed.\n");
      return 0;
    }
    else                                               //checking different scenario of divided values
    {
        a = num1->real * num2->real + num1->img * num2->img;
        b = num1->img * num2->real - num1->real * num2->img;
        c = num2->real * num2->real + num2->img * num2->img;

        if (a%c == 0 && b%c == 0)                
        {
          if (b/c >= 0)
            printf("Division of the complex numbers = %d + %di\n", a/c, b/c);
          else
            printf("Division of the complex numbers = %d %di\n", a/c, b/c);
        }
        else if (a%c == 0 && b%c != 0)
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d + %d/%di\n", a/c, b, c);
          else
            printf("Division of two complex numbers = %d %d/%di\n", a/c, b, c);
        }
        else if (a%c != 0 && b%c == 0)
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d/%d + %di\n", a, c, b/c);
          else
            printf("Division of two complex numbers = %d %d/%di\n", a, c, b/c);
        }
        else
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d/%d + %d/%di\n",a, c, b, c);
          else
            printf("Division of two complex numbers = %d/%d %d/%di\n", a, c, b, c);
        }
    }
    return 1;
}



        
      