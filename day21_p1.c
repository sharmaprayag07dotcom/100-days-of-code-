/*
 * Q41: Write a program to swap the first and last digit of a number.
 * Input: 12345  → Output: 52341
 */
#include <stdio.h>
#include <math.h>
int main() {
    int n, d=0, t, f, l, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while(t) { d++; t/=10; }
    l=n%10;
    f=n/(int)pow(10,d-1);
    r=n-(f*(int)pow(10,d-1))-l;
    r+=l*(int)pow(10,d-1)+f;
    printf("%d\n", r);
    return 0;
}
