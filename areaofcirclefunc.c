#include <stdio.h> 
/* Function to compute the area of a circle */ 
float myfunc (float r) 
{ 
float a; 
a= 3.14159 * r* r; 
return a; 
/* return result */ 
}
main() 
{ 
float radius, fucku; 
scanf ("%f", &radius); 
fucku = myfunc (radius); 
printf ("\n Area is %f \n", fucku);
} 

