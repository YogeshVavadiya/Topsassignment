#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    for (; num != 0; num /= 10)
	{
        remainder = num % 10; 
        reversed = reversed * 10 + remainder;
    }
	
    printf("\nOriginal number: %d\n", original);
    printf("\nReversed number: %d\n", reversed);

    return 0;
}

