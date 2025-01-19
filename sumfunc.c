#include<stdio.h>
void sum()
{
	int a,b,sum=0;
	printf("Give your first number:");
	scanf("%d",&a);
	printf("Give your second number:");
	scanf("%d",&b);
	sum=a+b;
	printf("Sum is %d",sum);
}
int main()
{
	sum();
	printf("\nHello!!");
	return 0;
}
