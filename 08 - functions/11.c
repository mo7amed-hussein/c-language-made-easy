/*
 Filename : 08 - functions /11.c
Description : reverse array of integers contents
*/
#include<stdio.h>

//declare print array function
void printArray(int array[] , int len);

//declare reverse array function
void reverse(int array[],int len);

int main()
{
    //array of integers
    int nums[] = {11,54,78,90,123,46,74,91};
    //print content before reverse
    puts("before");
    printArray(nums,8);
    //apply reverse
    reverse(nums,8);
    //print content after reverse
    puts("after");
    printArray(nums,8);

	return 0;
}

void reverse(int array[],int len)
{
    //loop index , temp storage for swap
    int i ,temp;
  //loop and swap each two elements
    for(i=0 ;i<len/2 ;i++)
    {
        temp = array[i] ;//store it in temp
        array[i] = array[len-i-1] ;//take content of other element
        array[len-i-1] = temp ;//take original content of the other element
    }
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

