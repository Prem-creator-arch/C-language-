#include<stdio.h>
int main()
{
	int r,c,n,f;
	printf("How many rows do you want to print for inverted triangle?\n");
	scanf("%d",&n);
	f=n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=f;c++)
		{
			printf("* ");
		}
		printf("\n");
		f--;
	}
	return 0;
}
