/*
 * Q8: Write a program to find the sum of the first n natural numbers.
 * Input: 10  → Output: Sum=55
 */
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum=%d\n", n*(n+1)/2);
    return 0;
}
