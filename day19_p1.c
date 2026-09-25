/*
 * Q37: Write a program to find the LCM of two numbers.
 * Input: 4 6  → Output: LCM = 12
 */
#include <stdio.h>
int main() {
    int a, b, t, oa, ob;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    oa=a; ob=b;
    while(b) { t=b; b=a%b; a=t; }
    printf("LCM = %d\n", (oa/a)*ob);
    return 0;
}
