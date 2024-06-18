#include<stdio.h>
int main()
{
	int year,months,days;
	
	printf("Enter days ");
	scanf("%d",&days);
	
	year=days/365;
	
	months=days % 365 /30;
	days=days % 365 %30 ;
	printf("%d Years  %d Months  %d Days",year,months,days);
	return 0;
}
