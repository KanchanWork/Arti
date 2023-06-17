// SOP-POP Approach - Arithmetics 
#include <stdio.h>
#include<conio.h>
// global data
float a=10;
float b=7;
int add();
int sub();
int mul();
float div();



int main()
{
    
	printf("A : %f\tB:%f\n",a,b);
	printf("Addition :%d\n",add());
	printf("Substraction :%d\n",sub());
	printf("Multiplication :%d\n",mul());
	printf("Division:%f\n",div());
	return 0;
}

int add()
{
	return (a+b); 
}

int sub()
{
	return (a-b); 
}
int mul()
{
	return (a*b);
}

float div()
{
	return (a/b);
}

