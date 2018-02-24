/*
 Filename : 09 - structures/01.c
Description : array of structures
*/
#include<stdio.h>

//describe book structure
struct book
{
    char author[100];
    char title[255];
    int year ;
};


int main()
{
    //create array and initialize it
    struct book  books[3] = {
                                              { "robert sedgewick","algorithms in c",2000},
                                              {"peter van der linden","expert c programming",2002},
                                              {"dwayne philips","image processing in c",1999}
                                             };
    //print books
    //first book
    printf("%s By %s At %d\n",books[0].title,books[0].author,books[0].year);
    //second book
     printf("%s By %s At %d\n",books[1].title,books[1].author,books[1].year);
    //third book
     printf("%s By %s At %d\n",books[2].title,books[2].author,books[2].year);

	return 0;
}
