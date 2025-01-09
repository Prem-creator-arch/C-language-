#include<stdio.h>
int main()
{
	int r,c,n;
	printf("How many rows do you want to print for the pattern?\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
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
	}
	return 0;
}
