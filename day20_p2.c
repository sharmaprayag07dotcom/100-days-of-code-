/*
 * Q40: Write a program to find the 1's complement of a binary number.
 * Input: 1010  → Output: 1's complement = 0101
 */
#include <stdio.h>
#include <string.h>
int main() {
    char b[65];
    int i;
    printf("Enter binary number: ");
    scanf("%s", b);
    for(i=0;b[i];i++) b[i]=b[i]=='0'?'1':'0';
    printf("1's complement = %s\n", b);
    return 0;
}
