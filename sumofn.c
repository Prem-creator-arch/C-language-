#include<stdio.h>
int main()
{
	int n,i=0,f=0;
	printf("Till where do you want to calculate the sum:");
	scanf("%d",&n);
	while (i<=n)
	{
	 f=f+i;
	 i++;
	}
	printf("The sum is:%d",f);		
    return 0;
}

