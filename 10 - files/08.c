/*
 Filename : 10 - files/05.c
Description : write to file ,in binary mode
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
    struct book b = {  "Leland L.Beck" , "System Software" , 1997 };

    //open file ,for writing in binary mode
    FILE  *filePtr = fopen("04.dat","wb");

    //check for file open error
    if(filePtr == NULL)
    {
        puts("can't open file ");
    }
    else
    {
        //write b variable as memory block to file
        fwrite( &b ,sizeof(b),1,filePtr);

        puts("data was written successfully ");

        fclose(filePtr);
    }
   return 0;
}
