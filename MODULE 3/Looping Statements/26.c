#include <stdio.h>

int main() {
    int n,i,sum = 0;

    printf("Enter no : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
	{
        sum += i*i;
    }
    printf("The sum of the 1 to %d is : %d\n", n, sum);

    return 0;
}

