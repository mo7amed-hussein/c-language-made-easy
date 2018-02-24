/*
 Filename : 03 - operators/02.c
Description : logical operators
*/
#include<stdio.h>

int main()
{
    printf("(12 >10) && (12 > 11)  =  %d \n", (12 >10) && (12 > 11) );
    printf("(14 >10) && (12 != 11)  =  %d \n\n", (14 >10) && (12 != 11) );

    printf("(12 >10) || (12 > 11)  =  %d \n", (12 >10) || (12 > 11) );
    printf("(14 >10) || (12 != 11)  =  %d \n\n", (14 >10) || (12 != 11) );

    printf("!(12 >10)  =  %d \n", !(12 >10) );
    printf("!(14 >10)   =  %d \n", !(14 >16) );

	return 0;
}

