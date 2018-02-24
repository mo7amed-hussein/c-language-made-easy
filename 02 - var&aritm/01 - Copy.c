/*
 Filename : 02 - var&aritm/01.c
Description : use variables to add two numbers
*/
#include<stdio.h>
#include<string.h>



23 -->  2 + 3 = 5
6 -->  6
4521 --> 4 + 5 + 2 + 1 = 12 
76234 --> 

int digits;
int num = 22 ;
if(num < 10 )
{
	digits = 1;
}
else if (num < 100 && num >=10)
{
	digits = 2 ;
}
.
.
.
push 12 
pop

printf("1 \n 2 \n 3 \n 4 \n 5 \n");
printf("6 \n 7 \n 8 \n 9 \n 10 \n");

int nums[] = {1,2,3,2,1};
int nums[] = {1,2,3,4,5};
void * malloc(size_t size);
short * ptr = &min;
void * calloc(size_t num, size_t size);
234 / 10 = 23      234 % 10 = 4 
23 / 10 = 2        23 % 10 = 3
2 / 10 = 0         2 % 10 = 2 


123 --> 321
4587 --> 7854
34 --> 43 
int main()
{
char firstNum = 4  ;//binary = 0000 0100
char secondNum = 10 ;//binary = 0000 1010

char andResult = firstNum & secondNum ; // (0000 0100) & (0000 1010) = 0000 0000
char orResult = firstNum | secondNum ; // (0000 0100) | (0000 1010) = 0000 1110
char xorResult = firstNum ^ secondNum ; // (0000 0100) & (0000 1010) = 0000 1110
char notResult = ~firstNum ; // ~(0000 0100) = 1111 1011

char rightShiftResult = firstNum >> 2; // (0000 0100) = 0000 0001
char leftshiftResult = firstNum << 2; // (0000 0100) = 0001 0000

int num[4] ={1,2,3,4};

printf("fifth element is %d \n",num[5]);

int carSpeed;//car spreed in kilometer/hour
struct 
{
    char name[100] ;
    float salary ;
} emp1 , emp2 ;

struct dimen 
{
	int height;
	int width;
};

//declare box1 
struct dimen box1;
//declare box2
struct dimen box2;

box1.height = 33;
box2.width  = 23 ;
struct coord
{
	int x ;
	int y ;
	int z ;
};

//declare intial 
struct coord intial;
//declare final 
struct coord final;
variable_type variable_name = value ;
typedef int myInt;
int number ;
char _ch;
float result;
int 5num;//start with number
char #ch;//start with symbol #
float first num ;//contain space
int *ptr;
int arr[3];
struct emp
{
	char name[255] ;
	float salary ;
};
 scanf(char *format, ...);
int average ;
short min = 33 ;
long sum ;
struct node
{
	int data;
	struct node *nextPtr;
};
#define LEVEL 0


#if LEVEL == 0 
	#define MAX 10
#elif LEVEL == 1
	#define MAX 20
#else
	#define MAX 30
#endif	

void (*ptr[10])(void);
void (*ptr[4])(int);
int  (*ptr[7]) (int,int);
printf(" 10 + 4 = %d \n",(*ptr)(10,4));
ptr = &add;
void ***ptr;
int * iptr = (int*)ptr;
0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 ...
fab(0) = 0 ;
fab(1) = 1 ;
fab(2) = 1 ;
fab(3) = 2 ;
fab(n) = fab(n-1) + fab(n-2)
fab(4) = fab(3)+fab(2) = fab(2)+ fab(1) + fab(1) + fab(0)
= fab(1) + fab(0) + 1 + 1 + 1 = 1 + 1 + 3 = 5 
4 * fact(3) = 12 * fact(2) = 24 * fact(1)= 24 
#define msg(x) printf(#x);
msg(hello) ->  printf("hello");
#define CAT(x,y)  x##y 
CAT(num,1) -> num1 
#if !defined(PNG_H)
#define PNG_H
.
.
.
#endif /* PNG_H */


#ifdef __WINDOWS__
    #include <stdlib.h> 
	#include <sys \stat.h> 
	#include <io.h> 
#endif // __WINDOWS__

#ifdef __UNIX__ 
	#include <sys/types.h> 
	#include <sys/stat.h> 
	#include <fcntl.h> 
#endif //__UNIX__ 

#include "headers/node.h" 
#define MAX 20
#define max(a,b) (a > b) ? a : b

#undef
struct status
{
	int isEven:1 ;//1 if even ,0 if odd
	int isZero:1 ://1 if zero ,0 if non-zero
	int isPrime:1 ;//1 if prime number or 0 if not
	int isPositive: 1;//1 if +ve or 0 if -ve
	int number:12 ;
};
enum days{ SATURDAY ,SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};
enum days today = MONDAY ;

enum grades {EXCELLENT =12 , VERYGOOD , GOOD , PASS};
enum grades myGrade = VERYGOOD ;
//create new type name
typedef struct emp empRecord;
sizeof(union value);
union value
{
	int x;
	int y;
};
union value v1;

myEmp emp1;
myEmp emp2;


ptr = &emp;

(*ptr).salary = 1234.5;
(*ptr).name = "omar mohamed";
//declare emp1 
struct emp emp1 = { "omar mohamed",1234.7 };
struct emp * ptr ;
//declare emp2
struct emp emp2;
	return 0;	
}
int *ptr[3];
float *fPtr[5];
char *cPtr[4];
int * intPtr;//pointer to integer
char * charPtr;//pointer to char
float * floatPtr;//pointer to float
int num = 22;
const int ptr = &num;
char str[] = 
str[3]='e'
*(str+3) ='w'
    //char pointer
    char *ptr = "string again";
	
switch ()
{
case 1 :
	   ;
   break;
case 2:
	  ;
   break;
default:
       ;

}	

while ()
{
	;
	;
	;
}
? : ;

array_type array_name [ array_size ] ;
num[1]
pointer_type *pointer_name ;
function_type function_name ( )
{
	;
	;
	;
}
int fputc(int c, FILE *stream);
int fgetc(FILE *stream); 

char * fgets(char * dst, int max, FILE * stream); 
int fputs(const char * restrict string, FILE * restrict stream); 

int sscanf(const char * restrict string, const char * restrict format, ...); 

fprintf(FILE * restrict stream, const char * restrict format, ...); 


size_t fread(void * restrict dst, size_t size, size_t num, FILE * restrict stream);
*
**
***
****
***
**
*

*
**
***
**
*


*
**
*


*


5 *  1 = 1
5 *  2 = 10 
5 *  3 = 15 
5 *  4 = 20 
5 *  5 = 25
5 *  6 = 30
5 *  7 = 35
5 *  8 = 40
5 *  9 = 45
5 * 10 = 50

5 11 5 11 5 11 5 11 
//first number 
int first = 11;
//second number
int second = 5;
//sequence length
int length = 8;
//int loop counter
int i;
//last value 
int last = first ;
for(i =0 ; i<length ; i++)
{
	if(last == first)
	{
		last = second;
	}
	else
	{
		last = first ;
	}
	printf("%d ",last);
}

c^2 = a^2 + b^2 
c = sqrt(a^2 + b^2) 
C = A ^ B ;
C ^ A = B ;
C ^ B = A ;
printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");
printf("***\n");
printf("**\n");
printf("*\n");
struct struct_name variable_name ;
{
	;
	;
};
"hello world"
char str[12] = "hello world" ;
 
int nums[20];//array of 20 intergers
float results[10];//array of 10 float
char sequence[5];//array of 5 characters 
do
{
     ;
	 ;
	 ;
}while();


for (	;	;	)
{
	;
	;
	;
}
	return 0;
}

