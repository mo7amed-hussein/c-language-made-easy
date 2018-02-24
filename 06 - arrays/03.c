/*
 Filename : 06 - arrays /03.c
Description :  arrays
*/
#include<stdio.h>

int main()
{
    //user inputs array
    int nums[5]={22,55,77,88,99};
    //average
    float average=0.0;
   // loop counter
   int counter ;

   //loop  to add all array values
   for(counter =0 ; counter <5 ; counter++)
   {
       //add each element to average value
       average += nums[counter];
   }

   average /=5.0;
    //print values
    printf("average is %.2f \n",average);

	return 0;
}

