#include<stdio.h>
int main()
{
	int r;
	printf("What is your rank?");
	scanf("%d",&r);
	if (1<=r&r<=6000)
	{
		printf("Get your self in IIT!");
	}
	else if (6001<=r&&r<=15000)
	{
		printf("Get your self in NIT!");
	}
	else if (15001<=r&&r<=30000)
	{
		printf("Welcome to Thapar!");
	}
	else 
	{
		printf("You Failed!");
	}
	return 0;
}
