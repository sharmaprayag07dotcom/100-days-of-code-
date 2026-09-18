/*
 * Q23: Write a program to calculate a library fine based on late days.
 * Input: 8  → Output: Fine = Rs. 16
 */
#include <stdio.h>
int main() {
    int d;
    printf("Enter late days: ");
    scanf("%d", &d);
    int rate = d<=5?1:d<=10?2:5;
    printf("Fine = Rs. %d\n", d*rate);
    return 0;
}
