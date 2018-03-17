/*
 Filename : 10 - files/06.c
Description : read numbers to file
*/
#include<stdio.h>

int main()
{
   //file pointer
   FILE *filePtr;
   //open file for writing
   filePtr = fopen("03.txt","r");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {
       //store read number
       int num;
       //fscanf return value
       int ret ;

       while(1)
       {
           //read number at a time
           ret = fscanf(filePtr ,"%d ",&num);
           if(ret == 0 || ret ==EOF)
           {
               break ;
           }
           printf("%d ",num);
       }

       //close file
       fclose(filePtr);

   }

   return 0;
}
