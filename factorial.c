#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("Till where do you want to calculate the factorial:");
	scanf("%d",&n);
	while (i<=n)
	{
	f=f*i;
	i++;
	}
	printf("The factorial is:%d",f);	
    return 0;
}

