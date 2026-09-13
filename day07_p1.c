/*
 * Q13: Write a program to check whether a year is a leap year.
 * Input: 2020  → Output: Leap year
 */
#include <stdio.h>
int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if ((y%4==0 && y%100!=0) || y%400==0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    return 0;
}
