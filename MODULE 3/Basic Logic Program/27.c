#include <stdio.h>

int main() {
    int days,months,rday; 

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;
    rday = days % 30;
    

    printf("%d days is = %d months and %d days\n", days, months,rday);

    return 0;
}

