#include <stdio.h>

float calculateInsurancePremium(float salary, float premiumPercentage) {
    return (salary * premiumPercentage) / 100;
}

int main() {
    float salary, premiumPercentage, insurancePremium;

    premiumPercentage = 5.0;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    insurancePremium = calculateInsurancePremium(salary, premiumPercentage);

    printf("Insurance premium: %.2f\n", insurancePremium);
    printf("Annual Insurance premium is %.2f",insurancePremium*12);

    return 0;
}

