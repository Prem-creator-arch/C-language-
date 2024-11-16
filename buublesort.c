#include<stdio.h>
int main() 
{
	int i,A[5],j,temp,n;
	printf("How many elements are needed for array?");
	scanf("%d",&n);
	printf("give the array:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("--------------------------------\n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}

