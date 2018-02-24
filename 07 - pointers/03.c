/*
 Filename : 07 - pointers /03.c
Description : two  pointers to same location
*/
#include<stdio.h>

int main()
{
   char  ch = 'A';

   //first ptr
   char *firstPtr = &ch;
   //second prt
   char *secondPtr = &ch;

   //read value via firstPtr
   printf("value is %c \n", (*firstPtr) );

   //change value via secondPtr
   (*secondPtr) = 'B';
   //print to check changes
   printf("value is %c\n",ch);
	return 0;
}

