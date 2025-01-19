#include<stdio.h>
int main()
{
	char name[5],address;
	printf("Give your string:");
	scanf("%s",name);
	printf("%s",name);
	printf("Give your Address now!!");
	gets(address);
	printf("%s",address);
	return 0;
}
