#include <stdio.h>

int main() 
{
    float dedustion, salary, premium=0.10, loan=0.10;

    printf("Enter annual salary : ");
    scanf("%f", &salary);
	
    premium = salary * 0.10;
    loan = salary * 0.10;
	printf("\nYour Insurance premium is %.2f\n",premium);
	printf("Your Loan Installment is %.2f\n",loan);
	
	dedustion=loan+premium;

    printf("\nremaining salary is : %.2f\n",salary-dedustion);

    return 0;
}

