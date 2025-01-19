#include<stdio.h>
#include<string.h>
int main()
{
	int count;
	char name[30];
	printf("Enter name:");
	gets(name);
	count=strlen(name);
	printf("String Length is %d",count);
	return 0;
}
