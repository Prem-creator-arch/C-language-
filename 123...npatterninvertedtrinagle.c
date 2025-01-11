#include<stdio.h>
int main()
{
	int r,c,n,d,f;
	printf("How many rows do you want?\n");
	scanf("%d",&n);
	f=n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=f;c++)
		{
			d=c;
			printf("%d ",d);
		}
		printf("\n");
		f--;
	}
	return 0;
}

