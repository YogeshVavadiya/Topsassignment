#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    printf("' 1=+ , 2=- , 3=* , 4=/ '\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    
    printf("Enter  number 1 : ");
    scanf("%f", &num1);
    
    printf("Enter  number 2 : ");
    scanf("%f", &num2);
    
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result of %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf("Result of %.2f / %.2f = %.2f\n", num1, num2, result);
            }
			else
			{
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}

