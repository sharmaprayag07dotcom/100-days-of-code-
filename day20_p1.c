/*
 * Q39: Write a program to find the product of odd digits.
 * Input: 12345  → Output: Product of odd digits = 15
 */
#include <stdio.h>
int main() {
    int n, p=1, d, has=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0) n=-n;
    while(n) { d=n%10; if(d%2) {p*=d; has=1;} n/=10; }
    if(has) printf("Product of odd digits = %d\n", p);
    else printf("No odd digits\n");
    return 0;
}
