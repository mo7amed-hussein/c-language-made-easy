/*
 Filename : 10 - files/01.c
Description : simple file write
*/
#include<stdio.h>

int main()
{
   //char array
   char ch[18] = {'w','e','l','c','o','m','e', ' ','t','o', ' ','c', ' ','f','i','l','e','s'};
   //file pointer
   FILE *filePtr;
   //open file for writing
   filePtr = fopen("01.txt","w");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {
       //loop index
       int i ;
       for(i =0 ;i<18 ;i++)
       {
           //write char by char to file
           fputc(ch[i],filePtr);
       }

        printf("file written successfully \n");
       //close file
       fclose(filePtr);

   }

   return 0;
}
