#include<stdio.h>
int main() 
{
	int r,R,c,C;
	printf("How many rows do you want?\n");
	scanf("%d",&R);
	printf("How many columns do you want?\n");
	scanf("%d",&C);
	for(r=1;r<=R;++r)
	{
		for(c=1;c<=r;++c)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
