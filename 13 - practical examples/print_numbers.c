/*
 Filename : 13 - practical examples /print_numbers.c
Description : print numbers from 1 to 10 using recursion
*/
#include<stdio.h>
void print(int end ,int current);

int main()
{
    print(10, 1);
	return 0;
}

void print(int end , int current)
{
    printf(" %d \n",current);

    if(end != current)
    {
        print(end , current+1 );
    }
}
