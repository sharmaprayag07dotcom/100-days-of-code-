/*
 * Q17: Write a program to find the roots of a quadratic equation.
 * Input: 1 -5 6  → Output: Real and distinct roots: 3.00 and 2.00
 */
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d>0) printf("Real and distinct roots: %.2f and %.2f\n",
        (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if (d==0) printf("Real and equal roots: %.2f\n", -b/(2*a));
    else printf("Complex roots: %.2f+%.2fi and %.2f-%.2fi\n",
        -b/(2*a), sqrt(-d)/(2*a), -b/(2*a), sqrt(-d)/(2*a));
    return 0;
}
