#include <stdio.h>

int main() {
    int num, max_digit = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; 
        if (remainder > max_digit)
		{
            max_digit = remainder; 
        }
        num /= 10;  
    }
    printf("Max digit = %d\n", max_digit);

    return 0;
}

