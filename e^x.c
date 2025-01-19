#include<stdio.h>

int main() {
    float x, term, sum;
    int n, count;
    printf("x=");
    scanf("%f", &x);
	printf("n="); 
    scanf("%d", &n); 
	term = 1.0;  
    sum = 0;     
	for (count = 1; count <= n;count++) 
	{
        sum += term;          
    	term *= x / count;   
    }
    printf("The series sum is %f\n", sum);
    return 0;
}
