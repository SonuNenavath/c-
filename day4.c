1. call by value
#include<stdio.h>
int swap(int a,int b)
{
 a=a+b-(b=a);
 printf("After swapping:  num1=%d , num2=%d", a,b);
 return(0);
}
int main()
{
 int num1, num2;
 printf("Enter two number: \n");
 scanf("%d\n%d", &num1,&num2);
 printf("Before swapping: num1=%d , num2=%d\n", num1,num2);
 swap(num1,num2);
 return(0);
}
***************************************************************
2. call by reference
#include<stdio.h>
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
 }
int main()
{
 int num1, num2;
 printf("Enter two number: \n");
 scanf("%d\n%d", &num1,&num2);
 printf("Before swapping: num1=%d , num2=%d\n", num1,num2);
 swap(&num1,&num2);
 printf("After swapping:  num1=%d , num2=%d", num1,num2);
 return(0);
}
****************************************************************
3. global, local, const, #define, ternary
#include<stdio.h>
#define true 1
#define false 0
int num1=20, num2=30;
const float pi=3.14;
int main()
{
    float r=2;
    printf("area of circle for r = %f : %.3f\n",r,(pi*r*r));
    printf("%d",(num1 > num2)?true:false);
}
****************************************************************
4. main>>abc>>bbc
#include<stdio.h>
int abc();
int bbc();
void  main()
{
    printf("main executed\n");
    abc();
}
int abc()
{
   printf("abc executed\n");
   bbc();
}  
int bbc()
{
   printf("bbc executed\n");
   return(0);
}
****************************************************************
