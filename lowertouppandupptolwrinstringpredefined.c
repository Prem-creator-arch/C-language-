#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char b;
	char s1[20]="arshita";
	char s2[20]="ARSHITA";
	strupr(s1);
	strlwr(s2);
	printf("%s\n",s1);
	printf("%s",s2);
	return 0;
}
