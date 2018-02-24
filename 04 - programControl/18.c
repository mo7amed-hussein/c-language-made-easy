/*
 Filename : 04 - programControl /17.c
Description : rectangle draw
*/
#include<stdio.h>

int main()
{
    //rectangle dimension
    int height = 6 ,width =12;
    //loops counters
    int i,j;

    //outer loop in rectangle height
    for(i=0;i<height;i++)
    {
        //inner loop for width
        for(j=0;j<width;j++)
        {
            printf("*");
        }
        printf("\n");
    }

	return 0;
}

