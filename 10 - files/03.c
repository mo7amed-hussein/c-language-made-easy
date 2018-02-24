/*
 Filename : 10 - files/03.c
Description : write string to file
*/
#include<stdio.h>

int main()
{
    //string array
    char *colors[6] = { "white" , "blue" , "red" , "green" , "yellow" , "black" };
   //file pointer
   FILE *filePtr;
   //open file for writing
   filePtr = fopen("02.txt","w");
   //check if error occur
   if(filePtr == NULL)
   {
       printf("can't open file /n");
   }
   else
   {

      int i;
      for(i =0 ;i<6 ;i++)
      {
        //write string in file
          fputs(colors[i],filePtr);
          //add space between each string
          fputc(' ',filePtr);
      }
      printf("file written successfully \n");
       //close file
       fclose(filePtr);

   }

   return 0;
}
