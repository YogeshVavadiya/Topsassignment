#include <stdio.h>

int main()
{

float r, a, c,PI=3.14159265359;   
    printf("Enter Radius of Circle = ");
    scanf("%f",&r);
    
	a = PI*r*r;
    c = 2*PI*r;
    
    printf("Area of the circle: %.2f\n",a);
    printf("Circumference of the circle: %.2f\n",c);
return 0;	
} 
