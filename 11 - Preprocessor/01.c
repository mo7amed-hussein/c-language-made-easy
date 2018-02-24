/*
 Filename : 11 - Preprocessor/01.c
Description : predefined symbolic constants
*/
#include<stdio.h>

int main()
{
   printf("__LINE__ is %d \n",__LINE__ );
   printf("__FILE__ is %s \n",__FILE__ );
   printf("__DATE__ is %s \n",__DATE__ );
   printf("__TIME__ is %s \n",__TIME__ );
   printf("__STDC__ is %d \n",__STDC__ );
   return 0;
}
