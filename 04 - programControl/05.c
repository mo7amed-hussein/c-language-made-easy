/*
 Filename : 04 - programControl /05.c
Description : grade calculator
*/
#include<stdio.h>

int main()
{
     //student degree
     int degree = 260;
     //total degree
     int total = 300;

     //grade
     float grade = (float)degree / total ;

    if( grade >= 0.85)
    {
        printf("Excellent\n");
    }
    else if ( ( grade>= 0.75 ) && ( grade < 0.85 ) )
    {
        printf("Very good\n");
    }
     else if ( ( grade>= 0.65 ) && ( grade <0.75 ) )
    {
        printf("good\n");
    }
     else if ( ( grade>= 0.55 ) && ( grade <0.65 ) )
    {
        printf("pass\n");
    }
    else
    {
       printf("fail\n");
    }
	return 0;
}

