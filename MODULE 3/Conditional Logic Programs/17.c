#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;

    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    printf("Enter the third angle: ");
    scanf("%f", &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        printf("The angles form a triangle.\n");
    } else {
        printf("The angles do not form a triangle.\n");
    }

    return 0;
}

