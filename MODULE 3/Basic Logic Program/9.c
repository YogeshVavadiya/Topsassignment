#include <stdio.h>

int main()
{
	int a,l,w,h;
	printf("Enter - ");
	scanf("%d%d%d",&w,&l,&h);
	
	a=2*(w*l+h*l+h*w) ;
	
	printf("circumference of Triangle is %d",a);
	return 0; 
}
