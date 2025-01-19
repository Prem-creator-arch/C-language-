#include<stdio.h>
int sum();
int main()
{
	int s,a,b;
	s= sum(a,b);
	printf("Sum is %d",s);
	return 0;
}
int sum()
{
	int a,b,m=0;
	printf ("Enter a&b:");
	scanf("%d%d",&a,&b);
	m=a+b;
	return m;
}
