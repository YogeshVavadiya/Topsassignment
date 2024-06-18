#include <stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter Two No\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("answer is %d\n",sum);
	printf("\n size of sum is %lu",sizeof(sum));
	return 0;
}
