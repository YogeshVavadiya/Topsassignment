#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int numbers[5];
    int i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    bubbleSort(numbers, 5);
    printf("\nNumbers in ascending order:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d\n", numbers[i]);
    }
    return 0;
}

