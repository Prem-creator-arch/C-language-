#include<stdio.h>
int main() 
{
	int i,A[50],p,size,v,pos;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:");
	for(i=0;i<size;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("Where do you want to delete at?");
	scanf("%d",&p);
	pos=p-1;
	if(pos<=0||pos>size)
	{
		printf("Invalid position.\n");
	}
	else
	{
		for(i=pos;i<size-1;++i)
	{
		A[i]=A[i+1];
	}
	size--;
	}
	for(i=0;i<size;++i)
	printf("%d\n",A[i]);
	return 0;
}

