/*
 Filename : 07 - pointers /01.c
Description : simple pointer
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

    //print num address
    printf("address is 0x%p \n",ptr);

	return 0;
}

