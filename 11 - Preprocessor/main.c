/*
 Filename : 11 - Preprocessor/main.c
Description : use calculator functions
*/
#include<stdio.h>
#include "calc.h"

int main()
{
   printf("10 + 3 = %d \n", add(10,3) );
   printf("10 - 3 = %d \n", sub(10,3) );
   printf("10 * 3 = %d \n", mult(10,3) );
   printf("10 / 3 = %d \n", div(10,3) );
   printf("10 %% 3 = %d \n", rem(10,3) );
   return 0;
}
