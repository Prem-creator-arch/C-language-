#include<stdio.h>
int main()
{
	char x;
	printf("Give your character In capital:");
	scanf("%c",&x);
	switch (x)
	{
		case 'A' :
			printf("fIRST LETTER");
		break;
		case 'B':
			printf("lAST LETTER");
		break;
		default:
			printf("mIDDLE LETTER");
		break;
	}
	return 0;
}
