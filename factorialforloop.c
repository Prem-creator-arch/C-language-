#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Till where do you want to calculate the factorial:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	f=f*i;
	printf("The factorial is:%d",f);	
    return 0;
}
