#include<stdio.h>
int main() 
{
	int a[3][3],b[3][2],c[3][2],i,j,k,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;	
			}	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);	
		}
		printf("\n");
	}
	return 0;
}




