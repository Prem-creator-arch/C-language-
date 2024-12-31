#include<stdio.h>
int main() 
{
	int i,A[5];
	printf("give the array:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("-----------------------------\n");
	for(i=4;i>=0;--i)
	printf("%d\n",A[i]);
	return 0;
}

