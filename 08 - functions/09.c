/*
 Filename : 08 - functions /07.c
Description : swap , by reference
*/
#include<stdio.h>

//declare swap function
void swap(int*,int*);

int main()
{
   //test variables
   int x = 10 ,y = 50;
   //print value before swap
   printf("before x = %d , y= %d \n",x,y);
   //swap by reference
   swap(&x , &y);
   //print value after swap
   printf("after x = %d , y= %d \n",x,y);
	return 0;
}

void swap(int *first,int *second)
{
    int temp = (*first);
    (*first) = (*second);
    (*second) = temp;
}
