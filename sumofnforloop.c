#include<stdio.h>
int main()
{
	int n=0,i,s=0;
	printf("Till where do you want to calculate the sum:");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	s=i+s;
	printf("The sum is:%d",s);		
    return 0; 
}

