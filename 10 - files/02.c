/*
 Filename : 10 - files/01.c
Description : simple file read
*/
#include<stdio.h>

int main()
{
   //file pointer
   FILE *filePtr;
   //open file for writing
   filePtr = fopen("01.txt","r");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {
      char ch;
      //loop till end of a file
      while(1)
      {
          //read char
          ch = fgetc(filePtr);
          //check for end of file
          if(ch == EOF)
          {
              break;
          }
          printf("%c",ch);

      }
       //close file
       fclose(filePtr);

   }

   return 0;
}
