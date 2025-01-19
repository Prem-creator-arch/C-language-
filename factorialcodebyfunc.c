#include<stdio.h>
int factorial(int);
int main()
{
	int fact,n;
	printf("Till where do you want to find factorial?\n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("The factorial is %d",fact);
	return 0;
}
int factorial(int n)
{
	if (n==1||n==0)
	return 1;
	else 
	return n*factorial(n-1);
}
