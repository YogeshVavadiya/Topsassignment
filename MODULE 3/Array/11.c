#include <stdio.h>

int main() {
    int i,numbers[5];
    
    printf("Enter 5 numbers : \n");
    for (i = 0; i < 5; i++) 
	{
        printf("Enter number %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("\nNumbers in reverse order : \n");
    for (i = 4; i >= 0; i--) 
	{
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}

