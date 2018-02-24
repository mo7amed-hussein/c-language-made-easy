/*
 Filename : 06 - arrays /10.c
Description :  reverse string then print
*/
#include<stdio.h>
#include<string.h>

int main()
{
    //string
    char str [] ={"abc def ghi jkl"} ;

    //chars counters
    int count ;

    //use string length function to get string length
    count = strlen(str);

    //for swapping
    char temp;
    //loop counter
    int i;

    printf("before : %s \n",str);

    //loop and swap
   for(i=0 ; i<(count/2) ;i++)
   {
       //store str[i] in temporarily location
       temp = str[i];
       //replace str[i] with str[count-1-i]
       str[i] =str[count-1-i];
       //replace str[count-1-i] with temp content
       str[count-1-i]=temp;
   }

  printf("after : %s \n",str);

	return 0;
}

