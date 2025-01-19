#include<stdio.h>
int main() 
{
	int i,A[5],B[5],C[5];
	printf("give the 1st array:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("-----------------------------\n");
	for(i=0;i<5;++i)
	printf("%d\n",A[i]);
	printf("give the 2nd array:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&B[i]);
	}
	printf("-----------------------------\n");
	for(i=0;i<5;++i)
	printf("%d\n",A[i]);
	for(i=0;i<5;++i)
	{
		C[i]=B[i]+A[i];
		printf("The sum of array is %d\n",C[i]);
	}
	return 0;
}
