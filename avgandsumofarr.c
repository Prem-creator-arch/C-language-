#include<stdio.h>
int main() 
{
	int i,A[5],sum=0,avg;
	printf("give the array:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("-----------------------------\n");
	for(i=0;i<5;++i)
	printf("%d\n",A[i]);
	for(i=0;i<5;++i)
	{
		sum=sum+A[i];
	}
	printf("The sum of array is %d\n",sum);
	avg=sum/5;
	printf("The average of array is %d",avg);
	return 0;
}

