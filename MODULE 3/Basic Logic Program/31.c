//31. Convert kilometers into meters
#include <stdio.h>
int main()
{
	int km,me;
	printf("Enter Kilometer");
	scanf("%d",&km);
	
	me = km*1000;
	
	printf("%d Kilometers = %d Meters",km,me);
}

