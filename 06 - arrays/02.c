/*
 Filename : 06 - arrays /02.c
Description :  arrays
*/
#include<stdio.h>

int main()
{
    //user inputs array
    int nums[5];

   // loop counter
   int counter ;
   //loop  to get values
   for(counter =0 ; counter <5 ; counter++)
   {
       //ask user to enter value
       printf("enter value #%d :   ", counter+1 );
       //get value
       scanf("%d",&nums[counter]);
   }
    //print values
    printf("values as received \n");
    //loop to print values
    for(counter =0 ; counter <5 ; counter++)
   {
       printf("%d \n",nums[counter]);
   }

	return 0;
}

