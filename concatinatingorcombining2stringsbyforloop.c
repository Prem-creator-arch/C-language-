#include<string.h>
int main()
{
	int l1,l2,i;
	char s1[5]="Prem ";
	char s2[7]="Kumar";
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<=l2;i++)
	{
		s1[l1+i]=s2[i];
	}	
	printf("%s",s1);
	return 0;
}
