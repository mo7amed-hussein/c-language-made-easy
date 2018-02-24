/*
 Filename : 10 - files/05.c
Description : read numbers from string
*/
#include<stdio.h>

int main()
{
   //string
   char *str = "24 30";
   //nums variables
   int first ,second ;
   //sscanf return value
   int ret ;

   //calling sscanf
   ret = sscanf(str,"%d %d",&first,&second);

   if(ret == 2)
   {
       printf("numbers are %d , %d\n",first ,second);
   }
   else
   {
       puts("error !");
   }

   return 0;
}
