#include <stdio.h>


struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
    printf("\n");
}

int main() 
{
	int i;
    struct Employee employees[5];
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employees[i].empname);
        printf("Employee Address: ");
        scanf(" %[^\n]s", employees[i].address);
        printf("Employee Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }
    
    printf("Details of all Employees:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Employee %d:\n", i + 1);
        printEmployee(employees[i]);
    }
    return 0;
}

