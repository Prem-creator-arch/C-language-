#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char b;
	char s1[20]="Arshita";
	l=strlen(s1);
	for(i=0;i<=l/2;i++)
	{
		b=s1[i];
		s1[i]=s1[l-1-i];
		s1[l-1-i]=b;
	}
	printf("%s",s1);
	return 0;
}
