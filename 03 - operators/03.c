/*
 Filename : 03 - operators/02.c
Description : reset
*/
#include<stdio.h>

int main()
{
    //value
    unsigned short value =  0b1000110;
    //generate the second value
    unsigned short reset = ~ (1<< 2);

    //before
    printf("value before is 0x%x \n",value);
    //apply reset
    value &= reset ;
    //after
     printf("value after is 0x%x \n",value);

	return 0;
}

