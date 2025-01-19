#include<stdio.h>
int sum(int,int);
int main()
{
	int s,a,b;
	printf ("Enter a&b:");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
int sum(int a,int b)
{
	int s=0;
	s=a+b;
	printf("Sum is %d",s);
}
