/*
 Filename : 13 - practical examples /mirrored.c
Description : check if array is mirrored
*/
#include<stdio.h>
int isMirroed(int arr[] ,int len);

int main()
{
    //array of integers
   int num [5]  = {1,2,3,2,1};

   if( isMirroed(num,5) == 1 )
   {
       puts("array is mirrored");
   }
   else
   {
       puts("array isn't mirrored");
   }
	return 0;
}

int isMirroed(int arr[] ,int len)
{
    //loop counter
    int i ;
     for(i =0 ; i<len/2 ;i++)
     {
        if(arr[i] != arr[len-1-i])
        {
            //array isn't mirrored
            return 0 ;
        }
     }
     //array is mirrored
     return 1;
}
