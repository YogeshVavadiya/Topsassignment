#include <stdio.h>

int main() 
{
    int i, j, n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            sum += j;
        }
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}

