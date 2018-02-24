/*
 Filename : 06 - arrays /05.c
Description :  print two dimen array
*/
#include<stdio.h>

int main()
{

 //create array, and assign it's value
   char shape[5][5] ={
                     { ' ' ,  ' ' , '*' , ' ' , ' ' },
					 { ' ' ,  '*' , '*' , '*' , ' ' },
					 { '*' ,  '*' , '*' , '*' , '*' },
					 { ' ' ,  '*' , '*' , '*' , ' ' },
					 { ' ' ,  ' ' , '*' , ' ' , ' ' },

						};
   //rows and columns counters
   int rows ,cols;


   //loop on rows
   for(rows =0 ; rows <5 ; rows++)
   {
       //loop on columns
        for(cols=0 ; cols<5 ; cols++)
        {
            printf("%c ",shape[rows][cols]);
        }
        printf("\n");
   }


	return 0;
}

