#include<stdio.h>
int main()
{
	int a = 1, ans; 
	ans = a++ + ++a;
	printf("%d", ans);
	return 0;
}

