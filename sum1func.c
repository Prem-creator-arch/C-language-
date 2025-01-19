#include<stdio.h>
int sum();   //Function declaration
int main()   
{
	sum(5,7);		//actual parameter
	printf("\nHello!!");
	return 0;
}
int sum(int a,int b)		//formal parameter
{
	int sum =0;
	sum=a+b;
	printf("Sum is %d",sum);
}

