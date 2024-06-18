#include <stdio.h>

int main()
{
	float height;
	printf("Enter Your Height in centimeters : ");
	scanf("%f",&height);
	
	if(height<0)
	{
		printf("Please Enter Right Height");
	}
	else if(height<155)
	{
		printf("You are short");
	}
	else if(height>155 && height<180)
	{
		printf("Your height is Average");
	}
	else
	{
		printf("Your Are lambbu......");
	}
	
	return 0;
}
