
#include <stdio.h>

int main()
{

    int week;

    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    switch(week)
    {
        case 1: 
            printf("Its Monday.\n");
            break;
        case 2: 
            printf("Its Tuesday.");
            break;
        case 3: 
            printf("Its Wednesday.");
            break;
        case 4: 
            printf("Its Thursday.\n");
            break;
        case 5:
            printf("Its Friday.");
            break;
        case 6: 
            printf("Its Saturday.\n");
            break;
        case 7: 
            printf("Its Sunday.\n");
            break;
        default: 
            printf("Um! Please enter week number between 1-7.");
    }
    return 0;
}
