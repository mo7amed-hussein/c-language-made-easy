/*
 Filename : 05 - practical examples /sequence.c
Description : flip sequence
*/
#include<stdio.h>

int main()
{
   //first number
int first = 11;
//second number
int second = 5;
//sequence length
int length = 8;
//int loop counter
int i;
//last value
int last = second ;
//flipper
int flip = first ^ last;

for(i =0 ; i<length ; i++)
{
	last ^=flip ;
	printf("%d ",last);
}
	return 0;
}

