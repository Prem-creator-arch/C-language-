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
			sum=sum+A[i][j];
		}
		printf("\n");
	}
	printf("Sum is %d",sum);
	return 0;
}

