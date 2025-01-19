#include<stdio.h>
int fibbonaci(int);
int main()
{
	int fibbo,n;
	printf("Which term of fibbonaci series do you want to find?\n");
	scanf("%d",&n);
	fibbo=fibbonaci(n);
	printf("The %dth term of fibbonaci series is %d",n,fibbo);
	return 0;
}
int fibbonaci(int n)
{
	if (n==2)
	return 1;
	if(n==1)
	return 0;
	else 
	return (fibbonaci(n-2)+fibbonaci(n-1));
}
