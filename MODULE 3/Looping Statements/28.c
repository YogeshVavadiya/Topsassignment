#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
	{
        if (i % 2 == 0) 
		{
            sum -= (float)i / (i + 1);
        }
		else 
		{
            sum += (float)i / (i + 1);
        }
    }
    printf("The sum of the series is: %.4f\n", sum);

    return 0;
}

