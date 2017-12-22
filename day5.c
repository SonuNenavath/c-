Error Handling
#include<stdio.h>
#include<conio.h>
#include<errno.h>
#include<string.h>
int main()
{

 FILE *fp;
 clrscr();
 fp = fopen("Error.text", "r");
 printf("value of errno: %d\n", errno);
 printf("the error message is : %s\n", strerror(errno));
 perror("message from perror");
 getch();
 return 0;
}
*****************************************************************
Passing Arguments
#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
 int i;
 clrscr();
 if(argc >= 2)
 {
  printf("the arguments supplied are \n");
  for(i=1;i<argc;i++)
  {
   printf("%s\t", argv[i]);
   getch();
  }
 }
 else
 {
  printf("argument list is empty.\n");
 }
 return 0;
}
*****************************************************************
String Array
#include<stdio.h>
#include<conio.h>
void main()
{
 char color[4][10] = {"blue", "red", "orange", "yellow"};
 int i=0;
 clrscr();
 for(i=0;i<4;i++)
    printf("%s\n",color[i]);
    getch();
}
*****************************************************************
Array
#include<stdio.h>
#include<conio.h>
int minarray(int arr[], int size)
{
 int min=arr[0];
 int i=0;
 for(i=1;i<size;i++)
 {
  if(min>arr[i])
  {
   min=arr[i];
  }
 }
 return min;
}

int main()
{
 int i=0,min=0;
 int numbers[]={4,5,7,3,8,9};
 clrscr();
 min=minarray(numbers,6);
 printf("min number is %d \n", min);
 getch();
  return 0;
}
*****************************************************************
Enum datatype
#include<stdio.h>
enum state {working = 0, failed, freezed};
enum state currstate = 2;
enum state findstate() {
 return currstate;
}
int main()
{
 (findstate() == working)? printf("working") : printf("not working");
 return(0);
}
*****************************************************************
Factorial
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
 if(n<0)
   return -1;
 if(n==0)
   return 1;
   return(n*factorial (n -1));
}
int main() {
int fact=0;
clrscr();
fact=factorial(3);
printf("\n factorial of 3 is %d", fact);
getch();
return 0;
}
*****************************************************************
Pointers
#include<stdio.h>
#include<conio.h>
int main()
{
int number=50;
int *p;
int **p2;
clrscr();
p=&number;
p2=&p;
printf("given number is %d\n ",number);
printf("address of number variable is %x \n",&number);
printf("address of p variable is %x \n",p);
printf("value of *p variable is %d \n",*p);
printf("address of p2 variable is %x \n", p2);
printf("value of **p2 variable is %d \n",**p2);
getch();
return 0;
}

*****************************************************************
Read from one file and write into other file
#include<stdio.h>
#include<conio.h>
int main()
{	FILE *fp;
	FILE *rp;
	char c;
	fp = fopen("prog41.c","r");
	rp = fopen("new.txt","w");
	while(  (c=fgetc(fp))!= EOF)
	{
		      fprintf(rp,"%c",c);
	}
	fclose(fp);
	fclose(rp);
	clrscr();
	getch();
	return 0;
}
