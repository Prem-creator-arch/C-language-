#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if (c>='a'&&c<='z')
	printf("The input is in lower case!\n",c);
	else
	printf("The input in upper case!\n",c);
	return 0;
}
