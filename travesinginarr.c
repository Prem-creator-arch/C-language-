#include<stdio.h>
int main() 
{
	int i,A[50],p,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:");
	for(i=0;i<size;++i)
	{
		scanf("%d",&A[i]);
	}
	
	printf("-----------------------\n");
	for(i=0;i<size;++i)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}

