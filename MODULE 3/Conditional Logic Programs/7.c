#include <stdio.h>

int main()
{
	int mar;
	printf("Enter Your Marks ");
	scanf("%d",&mar);
	
	if(mar>100)
	{
		printf("Please Enter between 1 TO 100 Marks ");
	}
	else if(mar>=33)
	{
		printf("Good job You are Pass");
	}	
	else if(mar<33)
	{
		printf("Better luck next time, You are Fail");
	}
	else
	{
		printf("Please Enter right Marks");
	}
	return 0;
}
