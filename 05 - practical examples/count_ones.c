/*
 Filename : 05 - practical examples /count_ones.c
Description : count ones in any positive number
*/
#include<stdio.h>

int main()
{
   //number
   unsigned int num ;
   //ones counter
   int count=0;
   //ask user to type number
    printf("please type number : \t");
    //get number
    scanf("%d",&num);

    //loop until num =0
    while(num != 0)
    {
        //check if reminder  of divide by 2 = 1
        if(num % 2 == 1)
        {
            count++;
        }

    //divide number by 2
        num /=2;
    }
    printf("number of ones is %d \n",count);
	return 0;
}

