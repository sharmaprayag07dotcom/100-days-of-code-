/*
 * Q18: Write a program to assign grades based on percentage.
 * Input: 95  → Output: Grade: A+
 */
#include <stdio.h>
int main() {
    float p;
    printf("Enter percentage: ");
    scanf("%f", &p);
    if (p>=90) printf("Grade: A+\n");
    else if (p>=80) printf("Grade: A\n");
    else if (p>=70) printf("Grade: B\n");
    else if (p>=60) printf("Grade: C\n");
    else if (p>=50) printf("Grade: D\n");
    else printf("Grade: F\n");
    return 0;
}
