#include <stdio.h>

int main() {
    int marksMath, marksPhy, marksChem;
    int totalMarksAll, totalMarksMathPhy;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &marksPhy);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &marksChem);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &marksMath);

    totalMarksAll = marksMath + marksPhy + marksChem;
    totalMarksMathPhy = marksMath + marksPhy;

    printf("Total marks of Maths, Physics and Chemistry: %d\n", totalMarksAll);
    printf("Total marks of Maths and Physics: %d\n", totalMarksMathPhy);

    if (marksMath >= 65 && marksPhy >= 55 && marksChem >= 50 && 
        (totalMarksAll >= 190 || totalMarksMathPhy >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

