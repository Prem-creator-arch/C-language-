#include<stdio.h>
int main()
{
	int r,c,n,d;
	printf("How many rows do you want?\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			d=c;
			printf("%d ",d);
		}
		printf("\n");
	}
	return 0;
}
