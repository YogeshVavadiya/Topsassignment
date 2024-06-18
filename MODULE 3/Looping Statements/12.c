#include <stdio.h>

int main()
 {
    int number, count = 1, evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");

    while (count <= 5)
	{
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        if (number % 2 == 0) 
		{
            evenCount++;
        }
		else 
		{
            oddCount++;
        }

        count++; 
    }
    
    printf("\nNumber of even numbers = %d\n", evenCount);
    printf("Number of odd numbers = %d\n", oddCount);

    return 0;
}

