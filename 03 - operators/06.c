/*
 Filename : 03 - operators/06.c
Description : toggle
*/
#include<stdio.h>

int main()
{
    //value
    unsigned short value =  0b1010110;
    //generate the set value
    unsigned short toggle = ( 1<< 1 );

    //before
    printf("value before is 0x%x \n",value);
    //apply toggle
    value ^= toggle ;
    //after
     printf("value after is 0x%x \n",value);

	return 0;
}

