#include <stdio.h>

int main() {
    int count = 0, num;

    while (count < 3)
	{
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num!=0)
		{
            printf("%d is a palindrome.\n", num);
        }
		else 
		{
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }

    return 0;
}

