/*
 Filename : 03 - operators/01.c
Description : relational operators
*/
#include<stdio.h>

int main()
{
    printf("12 >  10 =  %d \n", 12 >10 );
    printf("10 >= 12 =  %d \n", 10 >= 12);
    printf("10 >= 10 =  %d \n", 10 >= 10);
    printf("44 <  55 =  %d \n", 44 < 55);
    printf("44 <= 22 =  %d \n", 44 <= 22);
    printf("44 <= 44 =  %d \n", 44 <= 44);
    printf("10 == 55 =  %d \n", 10 == 55);
    printf("10 == 10 =  %d \n", 10 == 10);
    printf("10 != 10 =  %d \n", 10 != 10);
    printf("10 != 44 =  %d \n", 10 != 44);
	return 0;
}

