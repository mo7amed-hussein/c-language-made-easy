/*
 Filename : 08 - functions /07.c
Description : guess number
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //seed rand
    srand(time(NULL));

   //generate random number
   int random = (rand() %10 )+ 1 ;
   //user guess
   int guess;
   //trials
   int trials;

   for(trials =1 ; trials <=4 ; trials++ )
   {
       printf("guess number from 1..10 : ");
       scanf("%d",&guess);

       if(guess == random)
       {
           break;
       }
   }

   if(guess == random)
   {
       printf("Excellent , in %d trial\n",trials);
   }
   else
   {
       printf("number is %d \n",random);
   }

	return 0;
}
