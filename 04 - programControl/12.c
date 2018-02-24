/*
 Filename : 04 - programControl /11.c
Description : for loop
*/
#include<stdio.h>

int main()
{
    // loop counter
    int counter=0;

    //print counter value before loop
    printf("counter before loop is %d\n",counter);

    //loop if counter <= 10
   for(counter =0 ; counter <= 10 ; counter +=2)
   {
       printf("%d ",counter);
   }
    //print counter value after loop
    printf("\ncounter after loop is %d\n",counter);

	return 0;
}

