/*
 Filename : 06 - arrays /05.c
Description :  max  in array
*/
#include<stdio.h>

int main()
{
    //user inputs array
    int nums[8]={34,25,76,98,12,100,56,14};
    // max values
    int max;
   // loop counter
   int counter ;

   //assume first element in array is max
   max = nums[0];
   //loop  and check for larger
   for(counter =0 ; counter <8 ; counter++)
   {
       //check if a value is larger
       if(nums[counter] > max )
       {
           //replace larger value
           max = nums[counter] ;
       }
   }

    printf("Maximum value in  the array is %d \n",max);

	return 0;
}

