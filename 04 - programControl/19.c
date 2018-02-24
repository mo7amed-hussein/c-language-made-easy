/*
 Filename : 04 - programControl /17.c
Description : conditional expression
*/
#include<stdio.h>

int main()
{
    //numbers
    int first =23 ,second = 50;
    //conditional expression
    int bigger = (first>second) ? first : second ;

    printf("the bigger number is %d \n",bigger);
	return 0;
}

