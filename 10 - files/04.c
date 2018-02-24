/*
 Filename : 10 - files/03.c
Description : read string to file
*/
#include<stdio.h>

int main()
{
    //string array
    char str[50];
   //file pointer
   FILE *filePtr;
   //open file for reading
   filePtr = fopen("02.txt","r");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {
    //loop until reach end of file or error occur
      while(fgets(str,sizeof(str),filePtr))
      {
          printf("%s",str);
      }
       //close file
       fclose(filePtr);

   }

   return 0;
}
