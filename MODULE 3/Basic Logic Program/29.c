//29. Convert minutes into seconds and hours

#include <stdio.h>

int main()
{
	int sec, min;
	printf("Enter Minutes - ");
	scanf("%d",&min);
	
	sec = min*60;
	printf("%d Minutes = %d Seconds",min,sec);
	return 0;
}
