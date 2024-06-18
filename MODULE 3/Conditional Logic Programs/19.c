#include <stdio.h>

int main() {
    int customerID;
    char customerName[100];
    int unitsConsumed;
    float totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
    
    if (unitsConsumed <= 350)
	{
        totalAmount = unitsConsumed * 1.20;
    } 
	else if (unitsConsumed >350 && unitsConsumed < 600  ) 
	{	
		totalAmount = unitsConsumed * 1.50;
    } 
	else if (unitsConsumed > 600 && unitsConsumed < 800)
	{
        totalAmount = unitsConsumed *  1.80;
    } 
	else 
	{
        totalAmount = unitsConsumed  * 2.00;
    }
    

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}

