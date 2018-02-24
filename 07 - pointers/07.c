/*
 Filename : 07 - pointers /05.c
Description : array of strings
*/
#include<stdio.h>
#include<string.h>

int main()
{
    //array of strings,each element is pointer to char
   char *colors[] ={ "white" , "black" ,  "red" , "green" , "blue" };
   int index;
   //loop on array and print
   for(index=0 ; index <5 ; index++)
   {
        puts(colors[index]);
   }
	return 0;
}

