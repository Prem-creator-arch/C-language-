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
	printf("Where do you want to insert at?");
	scanf("%d",&p);
	printf("What do you want to insert?");
	scanf("%d",&v);
	pos=p-1;
	for(i=size-1;i>=pos;--i)
	{
		A[i+1]=A[i];
	}
	A[pos]=v;
	size++;
	for(i=0;i<size;++i)
	printf("%d\n",A[i]);
	return 0;
}

