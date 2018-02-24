/*
 Filename : 06 - arrays /03.c
Description :  search in array
*/
#include<stdio.h>

int main()
{
    //user inputs array
    int nums[5]={34,25,76,98,12};
    //value to search for
    int value=98;
    //value index
    int key=-1;
   // loop counter
   int counter ;

   //loop  until find the value
   for(counter =0 ; counter <5 ; counter++)
   {
       //check if value match
       if(nums[counter] == value)
       {
           //assign value index to key
           key = counter ;
           //exit loop
           break;
       }
   }

   //check if value was found or not
  if(key != -1)
  {
      printf("value %d located in array at index %d \n",value,key);
  }
  else
  {
      printf("unknown value\n");
  }

	return 0;
}

