/*
 * Q95: Check if one string is a rotation of another.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char a[200], b[200], tmp[400];
    printf("Enter first string: ");
    scanf("%s",a);
    printf("Enter second string: ");
    scanf("%s",b);
    if(strlen(a)!=strlen(b)) { printf("Not a rotation\n"); return 0; }
    strcpy(tmp,a); strcat(tmp,a);
    printf(strstr(tmp,b)?"Is a rotation\n":"Not a rotation\n");
    return 0;
}
