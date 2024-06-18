#include<stdio.h>
int main()
{
	char fname[5],mname[5],lname[5];
	printf("Enter First name :- ");
	scanf("%s",&fname);
	printf("Enter Middle name :- ");
	scanf("%s",&mname);
	printf("Enter Lastname name :- ");
	scanf("%s",&lname);
	
	printf("%c.%c.%c",fname[0],mname[0],lname[0]);
	return 0;
}
