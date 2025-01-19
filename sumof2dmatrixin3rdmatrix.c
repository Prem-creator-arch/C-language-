#include<stdio.h>
int main() 
{
	int A[2][3],B[2][3],C[2][3],i,j,sum;
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
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

