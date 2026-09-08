/*
 * Q4: Write a program to calculate area and circumference of a circle.
 * Input: 7  → Output: Area=153.94, Circumference=43.96
 */
#include <stdio.h>
#define PI 3.14159f
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area=%.2f, Circumference=%.2f\n", PI*r*r, 2*PI*r);
    return 0;
}
