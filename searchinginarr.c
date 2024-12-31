#include<stdio.h>
int main() 
{
	int i,A[5],p;
	printf("give the array A:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("What do you want to find?");
	scanf("%d",&p);
	for(i=0;i<5;++i)
	{
		if(p==A[i])
		printf("Element found.");
	}
	return 0;
}

