/*
 * Q55: Write a program to print all prime numbers from 1 to n.
 * Input: 20  → Output: 2 3 5 7 11 13 17 19
 */
#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if(n<2) return 0;
    for(int i=2;i<=(int)sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=2;i<=n;i++) if(isPrime(i)) printf("%d ",i);
    printf("\n");
    return 0;
}
