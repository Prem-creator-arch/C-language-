#include<stdio.h>
int main() 
{
	int r,i,j;
	printf("Give the number of rows to be printed:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}

