/*
 Filename : 12 - advanced functions and pointers/01.c
Description : allocate int with malloc
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //pointer to hold new storage address
    int * ptr;
    //allocate memory
    ptr = (int*)malloc(sizeof(int));
    //change value
    (*ptr) =20 ;
    //print  content
    printf("value is %d \n", (*ptr) );
    //free allocated memory
    free(ptr);
   return 0;
}

