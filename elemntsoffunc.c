#include<stdio.h>
void sum();   //Function declaration
int main()   
{
	sum();		//Function calling
	return 0;
}
void sum()		//Function definition
{
	int a,b,sum=0;
	printf("Give your first number:");
	scanf("%d",&a);
	printf("Give your second number:");
	scanf("%d",&b);
	sum=a+b;
	printf("Sum is %d",sum);
}

