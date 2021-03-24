/**
 * @file complex_number.c
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
#include "unity\unity.h"

complex_t num1={12,5};
complex_t num2={20,5};
complex_t num3={65,-2};
complex_t num4={-23,-9};
complex_t zerovalue={0,0};

/**
 * @brief functions of unity
 * setUp()
 * testDown()
 * 
 */
void setUp(){}
void tearDown(){}

/**
 * @brief test_sum function is a part of unit testing to test different values 
 *
 */
void test_sum(void){
    TEST_ASSERT_EQUAL(1,complex_sum(&num1,&num2));
    TEST_ASSERT_EQUAL(1,complex_sum(&num2,&num3));
    TEST_ASSERT_EQUAL(1,complex_sum(&num3,&num4));
    TEST_ASSERT_EQUAL(1,complex_sum(&num1,&num4));
    TEST_ASSERT_EQUAL(1,complex_sum(&num1,&num3));
    TEST_ASSERT_EQUAL(0,complex_sum(NULL,NULL));
    
}

/**
 * @brief test_diff function is part of unit testing to test different values
 * 
 */
void test_diff(void){
    TEST_ASSERT_EQUAL(1,complex_diff(&num1,&num2));
    TEST_ASSERT_EQUAL(1,complex_diff(&num2,&num3));
    TEST_ASSERT_EQUAL(1,complex_diff(&num3,&num4));
    TEST_ASSERT_EQUAL(1,complex_diff(&num1,&num4));
    TEST_ASSERT_EQUAL(1,complex_diff(&num1,&num3));
    TEST_ASSERT_EQUAL(0,complex_diff(NULL,NULL));
    
}

/**
 * @brief test_mul function is part of unit testing to test different values
 * 
 */
void test_mul(void){
    TEST_ASSERT_EQUAL(1,complex_mul(&num1,&num2));
    TEST_ASSERT_EQUAL(1,complex_mul(&num2,&num3));
    TEST_ASSERT_EQUAL(1,complex_mul(&num3,&num4));
    TEST_ASSERT_EQUAL(1,complex_mul(&num1,&num4));
    TEST_ASSERT_EQUAL(1,complex_mul(&num1,&num3));
    TEST_ASSERT_EQUAL(0,complex_mul(NULL,NULL));
}

/**
 * @brief test_div function is part of unit testing to test different values
 * 
 */
void test_div(void){
    TEST_ASSERT_EQUAL(1,complex_div(&num1,&num2));
    TEST_ASSERT_EQUAL(1,complex_div(&num2,&num3));
    TEST_ASSERT_EQUAL(1,complex_div(&num3,&num4));
    TEST_ASSERT_EQUAL(1,complex_div(&num1,&num4));
    TEST_ASSERT_EQUAL(1,complex_div(&num1,&num3));
    TEST_ASSERT_EQUAL(0,complex_div(&num1,&zerovalue));
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main(){
    UNITY_BEGIN();
    printf("\n\n\n---------------------------------SUM OF COMPLEX NUMBER--------------------------\n\n\n");
    RUN_TEST(test_sum);
    printf("\n\n\n---------------------------------DIFFERENCE OF COMPLEX NUMBER--------------------------\n\n\n");
    RUN_TEST(test_diff);
    printf("\n\n\n---------------------------------MULTIPLICATION OF COMPLEX NUMBER--------------------------\n\n\n");
    RUN_TEST(test_mul);
    printf("\n\n\n---------------------------------DIVISION OF COMPLEX NUMBER--------------------------\n\n\n");
    RUN_TEST(test_div);
    return UNITY_END();
}
