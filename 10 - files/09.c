/*
 Filename : 10 - files/05.c
Description : read file ,in binary mode
*/
#include<stdio.h>


//declare structure book
struct book
{
    char author[100];
    char title[100];
    short year ;
};

int main()
{
    struct book b ;

    //open file ,for writing in binary mode
    FILE  *filePtr = fopen("04.dat","rb");

    //check for file open error
    if(filePtr == NULL)
    {
        puts("can't open file ");
    }
    else
    {
        //read binary block from file , size is size of b struct
        fread(&b , sizeof(b) , 1 , filePtr);
        fclose(filePtr);
        //print structure content
        printf("book  : %s , %s , %d \n",b.title ,b.author ,b.year);
    }
   return 0;
}
