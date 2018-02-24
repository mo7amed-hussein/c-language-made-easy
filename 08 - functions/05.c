/*
 Filename : 08 - functions /02.c
Description : local
*/
#include<stdio.h>

int main()
{
    //local variable
    int first = 20;

    {
        //very local variable
            int second;
    }

	return 0;
}

