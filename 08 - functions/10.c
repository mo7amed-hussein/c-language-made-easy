/*
 Filename : 08 - functions /10.c
Description : print array of integers contents
*/
#include<stdio.h>

//declare print array function
void printArray(int array[] , int len);

int main()
{
    //array of integers
    int nums[] = {11,54,78,90,123,46,74,91};

    printArray(nums,8);

	return 0;
}

void printArray(int array[] , int len)
{
    int index ;
    printf("\n[ ");
    //loop ,print array elements
    for(index =0 ;index <len ;index++)
    {
        printf(" %d ",array[index]);
    }

    printf(" ]\n");
}

