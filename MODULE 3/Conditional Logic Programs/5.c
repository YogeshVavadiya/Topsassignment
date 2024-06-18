#include<stdio.h>
int main()
{
	int no;
	printf("Enter Two No : ");
	scanf("%d",&no);
	
	if (no>0)
	{
		printf("No is Positive");
	}
	else if(no<0)
 	{
		printf("No is Nagetive");
	}
	else
	{
	 	printf("No is 0 not Positive not Negative ");	
	}
	
	return 0;
}
