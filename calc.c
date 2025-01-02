#include<stdio.h>
#include<math.h>
int main()
{
	printf("1. For addition is '+'\n");
	printf("2. For subraction is '-'\n");
	printf("3. For multiplication is '*'\n");
	printf("4. For division is '/'\n");
	printf("5. For remainder is '%'\n");
	printf("6. For square root is (^1/2)\n");
	printf("7. For logarithm is (ln())\n");
	int x,y,m;
	float result,ans;
	printf("Choose an operation (1-7): ");
    scanf("%d", &m);
	switch (m)
	{
		case 1:
			printf("Give first number:");
			scanf("%d",&x);
			printf("Give second number:");
			scanf("%d",&y);
			printf("%d\n",x+y);
		break;
		case 2:
			printf("Give first number:");
			scanf("%d",&x);
			printf("Give second number:");
			scanf("%d",&y);
			printf("%d\n",x-y);
		break;
		case 3:
			printf("Give first number:");
			scanf("%d",&x);
			printf("Give second number:");
			scanf("%d",&y);
			printf("%d\n",x*y);
		break;
		case 4:
			printf("Give first number:");
			scanf("%d",&x);
			printf("Give second number:");
			scanf("%d",&y);
			printf("%d\n",x/y);
		break;
		case 5:
			printf("Give first number:");
			scanf("%d",&x);
			printf("Give second number:");
			scanf("%d",&y);
			printf("%d\n",x%y);
		break;
		case 6:
			printf("Give number whose squareroot is needed:");
			scanf("%d",&x);
			ans=pow(x,0.5);
			printf("%f\n",ans);
		break;
		case 7:
			printf("Give number whose logarithm is needed:");
			scanf("%d",&x);
			result= log(x);
			printf("%f\n",result);
		break;
	}
	return 0;
}
