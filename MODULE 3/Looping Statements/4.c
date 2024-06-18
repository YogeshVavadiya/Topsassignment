#include<stdio.h>

int main()
{
	int i, j, sum,no;
	
	printf("Enter Table no You want to print - ");
	scanf("%d",&j);
	printf("\nEnter The no where you want to print - ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		sum=i*j;
		printf("%d * %d = %d\n",j,i,sum);
	}
	
	return 0;
}
