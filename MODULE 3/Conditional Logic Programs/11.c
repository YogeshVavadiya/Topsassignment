#include <stdio.h>

int main()
{
	int no;
	printf("Enter No : ");
	scanf("%d",&no);
	
	(no%2==0)?printf("%d Is Even No ",no)
			  :printf("%d Is Odd No ",no);
	
	return 0;
}
