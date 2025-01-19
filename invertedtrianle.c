#include<stdio.h>
int main() 
{
	int r,R,c;
	printf("How many rows do you want?\n");
	scanf("%d",&R);
	for(r=0;r<R;r++)
	{
		for(c=0;c<r;c++)
		{printf(" ");}
		for(c=0;c<R-r;c++)
		{printf("*");}
		printf("\n");
	}
	return 0;
}

