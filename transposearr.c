#include<stdio.h>
int main() 
{
	int A[2][3],i,j,sum;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);	
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",A[j][i]);
		}
		printf("\n");
	}
	return 0;
}

