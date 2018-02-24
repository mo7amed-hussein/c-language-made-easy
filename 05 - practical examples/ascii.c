/*
 Filename : 05 - practical examples /ascii.c
Description :ascii table
*/
#include<stdio.h>

int main()
{
   //counter
   int count = 0 ;
   printf("Dec\tHex\tchar\n");
   for(count=0 ;count < 12 ;count++)
   {
       printf("%d\t%x\t%c\n",count,count,count);
   }
	return 0;
}

