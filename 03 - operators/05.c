/*
 Filename : 03 - operators/02.c
Description : set
*/
#include<stdio.h>

int main()
{
    //value
    unsigned short value =  0b1010110;
    //generate the set value
    unsigned short set = ( 1<< 5 );

    //before
    printf("value before is 0x%x \n",value);
    //apply reset
    value |= set ;
    //after
     printf("value after is 0x%x \n",value);

	return 0;
}

