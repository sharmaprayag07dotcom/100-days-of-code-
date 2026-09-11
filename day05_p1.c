/*
 * Q9: Write a program to calculate simple and compound interest.
 * Input: 1000 5 2  → Output: Simple Interest=100.00, Compound Interest=102.50
 */
#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t);
    float si = p*r*t/100;
    float ci = p*pow(1+r/100,t)-p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    return 0;
}
