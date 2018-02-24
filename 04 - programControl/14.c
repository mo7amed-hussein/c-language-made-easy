/*
 Filename : 04 - programControl /13.c
Description : goto example
*/
#include<stdio.h>

int main()
{
        //jump to second label
        goto second;
        printf("first");
      //define second label
    second :
        printf("second");

	return 0;
}

