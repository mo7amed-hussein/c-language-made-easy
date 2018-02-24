/*
 Filename : 08 - functions /11.c
Description : array average
*/
#include<stdio.h>

//declare array average function
int average(int array[] , int len);

int main()
{
    //array of integers
    int nums[] = {11,54,78,90,123,46,74,91};

    int avg = average(nums , 8 );

    printf("array average is %d \n",avg);

	return 0;
}

//declare array average function
int average(int array[] , int len)
{
    int i,sum=0;
    for(i=0 ; i<len ;i++)
    {
        sum +=array[i];
    }
    return sum /len ;
}

