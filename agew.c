#include<stdio.h>
int main()
{
	int b;
	printf("Enter bob age:\n");
	scanf("%u",&b);
	int s;
	printf("Enter sue age:\n");
	scanf("%u",&s);
	if (b!=s)
	{
		printf("bob and sue are of diffrent age\n");
		if (b>s)
		{
			printf("sue bob ko bhaiya bol\n");
			if((b-20)>s)
			{
				printf("bob is 20 saal bada\n");
			}
		}
		if (s>b)
		{
			printf("bob sue ko bhaiya bol\n");
			if((s-20)>b)
			{
				printf("sue is 20 saal bada\n");
			}
		}
	}
	if (b==s)
	printf("Tum dono ka same hai!");
    return 0;
}
