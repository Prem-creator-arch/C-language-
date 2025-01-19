#include<stdio.h>
int main()
{
	char name[5];
	printf("Give your string:");
	scanf("%s",name);
	printf("%.1s\n",name);
	printf("%10.4s\n",name);
	puts(name);
	printf("%s",name[3]);
	return 0;
}
