#include <stdio.h>

int main() {
    int count = 1, sum = 0, number;

    printf("Enter 10 numbers:\n");

    while (count <= 10)
	{
        printf("Enter number %d: ", count);
        scanf("%d", &number);
        sum += number; 
        count++;       
    }

    printf("Sum of the 10 numbers = %d\n", sum);

    return 0;
}

