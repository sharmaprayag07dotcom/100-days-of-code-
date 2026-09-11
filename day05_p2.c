/*
 * Q10: Write a program to convert seconds to HH:MM:SS format.
 * Input: 3661  → Output: 1:1:1
 */
#include <stdio.h>
int main() {
    int s, h, m;
    printf("Enter seconds: ");
    scanf("%d", &s);
    h=s/3600; m=(s%3600)/60; s=s%60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
