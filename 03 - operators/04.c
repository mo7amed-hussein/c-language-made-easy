/*
 Filename : 03 - operators/04.c
Description : bit check
*/
#include<stdio.h>

int main()
{
    //value
    unsigned short value =  0b1010110;
    //generate the check value
    unsigned short check = (1<< 4);//bit number is 4

    if( (value & check ) == check )
    {
        printf("bit value is 1\n");
    }
    else
    {
        printf("bit value is 0\n");
    }

	return 0;
}

