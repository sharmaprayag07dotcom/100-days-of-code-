/*
 * Q20: Write a program to display the day of the week (1-7).
 * Input: 1  → Output: Monday
 */
#include <stdio.h>
int main() {
    int d;
    printf("Enter day number (1-7): ");
    scanf("%d", &d);
    char *days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if (d>=1&&d<=7) printf("%s\n", days[d-1]);
    else printf("Invalid\n");
    return 0;
}
