#include<stdio.h>
int main()
{
	int r,c,n,f;
	printf("How many rows do you want to print the pattern for?\n");
	scanf("%d",&n);
	f=n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=f;c++)
		{
			if((r+c)%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
		f--;
	}
	return 0;
}
