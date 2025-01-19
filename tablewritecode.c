#include<stdio.h>
int main () 
{ 
	int t,n=1;
	printf("Give the number whose table is desired:");
	scanf("%d",&t);
	while (n<11)
	{
		printf("%d*%d=%d\n",t,n,t*n);
		n++;
	}
	return 0; 
}
