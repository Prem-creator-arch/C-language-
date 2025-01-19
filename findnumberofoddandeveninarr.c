#include<stdio.h>
int main() 
{
	int i,A[10],even=0,odd=0;
	printf("give the array:");
	for(i=0;i<10;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("-----------------------------\n");
	for(i=0;i<10;++i)
	printf("%d\n",A[i]);
	for(i=0;i<10;++i)
	{
		if(A[i]%2==0)
		even=even+1;
		else
		odd=odd+1;
	}
	printf("The number of even integers in array is:%d\n",even);
	printf("The number of odd integers in array is:%d",odd);
	return 0;
}


