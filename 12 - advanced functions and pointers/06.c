/*
 Filename : 12 - advanced functions and pointers/01.c
Description : pointer to pointer usage
*/
#include<stdio.h>
#include<stdlib.h>
//declare function prototype
void createVar( float **fptr , int **iptr );

int main()
{
    //pointer to hold new storage address
    int * iptr;
    float *fptr;
    createVar(&fptr,&iptr);

    (*iptr) = 40 ;
    (*fptr) = 12.3;

    printf("values are %d , %.2f \n", (*iptr) , (*fptr) );
    //release memory
    free(iptr);
    free(fptr);
   return 0;
}
void createVar( float **fptr , int **iptr )
{
    //allocate for float
    (*fptr) = (float*)malloc(sizeof(float));
    //allocate for int
    (*iptr) = (int*)malloc(sizeof(int));
}
