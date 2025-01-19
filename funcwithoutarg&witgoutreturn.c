#include<stdio.h>
void sum();
void main()
{
	sum();
}
void sum()
{
	int a,b;
	printf ("Enter a&b:");
	scanf("%d%d",&a,&b);
	printf("sum=%d",a+b);
}
