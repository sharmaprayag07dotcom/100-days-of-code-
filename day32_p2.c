/*
 * Q64: Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>
int main() {
    int n, freq[10]={0}, i, maxFreq=0, maxDigit=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0) n=-n;
    while(n) { freq[n%10]++; n/=10; }
    for(i=0;i<10;i++) if(freq[i]>maxFreq) { maxFreq=freq[i]; maxDigit=i; }
    printf("Most frequent digit: %d (appears %d times)\n", maxDigit, maxFreq);
    return 0;
}
