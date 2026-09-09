/*
 * Q5: Write a program to convert temperature from Celsius to Fahrenheit.
 * Input: 100  → Output: Fahrenheit=212
 */
#include <stdio.h>
int main() {
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit=%.0f\n", c*9/5+32);
    return 0;
}
