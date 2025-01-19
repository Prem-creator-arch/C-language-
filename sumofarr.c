#include<stdio.h>
int main() 
{
	int i,A[5],B[5],s[5];
	printf("give the array A:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("give the array B:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<5;++i)
	{
		s[i]=A[i]+B[i];
	}
	printf("-----------------------------\n");
	for(i=0;i<5;++i)
	printf("%d\n",s[i]);
	return 0;
}

