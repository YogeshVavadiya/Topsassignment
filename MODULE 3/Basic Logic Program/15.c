#include<stdio.h>
int main()
{
	char name[0];
	printf("Enter country name :- ");
	scanf("%s",&name);
	
	printf("%c%c.\n",name[0],name[1]);
	return 0;
}
