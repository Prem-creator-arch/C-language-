#include<stdio.h>
int main()
{
	printf("1. For addition is '+'\n");
	printf("2. For subraction is '-'\n");
	printf("3. For multiplication is '*'\n");
	printf("4. For division is '/'\n");
	printf("5. For remainder is '%'\n");
	int x,y,m;
	printf("Choose an operation (1-5): ");
    scanf("%d", &m);
	printf("Give first number:");
	scanf("%d",&x);
	printf("Give second number:");
	scanf("%d",&y);
	switch (m)
	{
		case 1:
			printf("%d\n",x+y);
		break;
		case 2:
			printf("%d\n",x-y);
		break;
		case 3:
			printf("%d\n",x*y);
		break;
		case 4:
			printf("%d\n",x/y);
		break;
		case 5:
			printf("%d\n",x%y);
		break;
	}
	return 0;
}
