#include <stdio.h>

int main() 
{
    float salary, premium;

    printf("Enter annual salary : ");
    scanf("%f", &salary);

    premium = salary * 0.05;

    printf("The premium is : %.2f\n", premium);

    return 0;
}

