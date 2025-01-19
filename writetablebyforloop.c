#include<stdio.h>
int main () 
{ 
	int t,n;
	printf("Give the number whose table is desired:");
	scanf("%d",&t);
	for(n=1;n<11;n++)
	printf("%d*%d=%d\n",t,n,t*n);
	return 0; 
}
