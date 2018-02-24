/*
 Filename : 07 - pointers /02.c
Description : dereference pointer
*/
#include<stdio.h>

int main()
{
    //declare int variable
    int num =12;
    //declare pointer to integer
    int * ptr ;
    //assign num address to ptr
    ptr = &num;

    //print value that ptr  point to
    printf("value is  %d \n", (*ptr) );

    //change variable value via ptr
    (*ptr) = 150;
    //print num value
    printf("new value is %d \n",num);

	return 0;
}

