#include <stdio.h>

int main() 
{
    int salary, annual;

    printf("Enter monthly salary : ");
    scanf("%d", &salary); 

    annual = salary * 12;

    printf("Annual salary is : %d\n", annual);

    return 0;
}

