/*
 Filename : 10 - files/05.c
Description : write numbers to file
*/
#include<stdio.h>

int main()
{
   //numbers array
   int nums[6] = {23 , 54 , 78 ,91 ,11 , 38 };
   //file pointer
   FILE *filePtr;
   //open file for writing
   filePtr = fopen("03.txt","w");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {
       //loop index
       int i ;
       for(i =0 ;i<6 ;i++)
       {
           //write number to
           fprintf(filePtr ,"%d ",nums[i] );
       }

        printf("file written successfully \n");
       //close file
       fclose(filePtr);

   }

   return 0;
}
