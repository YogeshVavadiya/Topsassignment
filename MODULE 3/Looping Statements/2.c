#include <stdio.h>

int main() {
    int numbers[5],i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
	{
        printf("Enter number : ");
        scanf("%d", &numbers[i]);
    }

    printf("\nThe numbers you entered are:\n");

    
    for ( i = 0; i < 5; i++) 
	{
        printf("Number %d \n", numbers[i]);
    }

    return 0;
}

