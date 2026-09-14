/*
 * Q16: Write a program to find the largest among three numbers.
 * Input: 3 7 5  → Output: Largest = 7
 */
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a>b ? (a>c?a:c) : (b>c?b:c);
    printf("Largest = %d\n", max);
    return 0;
}
