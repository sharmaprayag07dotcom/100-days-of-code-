/*
 * Q99: Change date format from dd/mm/yyyy to dd-Mon-yyyy.
 * Input: 07/09/2026  → Output: 07-Sep-2026
 */
#include <stdio.h>
int main() {
    int d, m, y;
    char *months[]={"Jan","Feb","Mar","Apr","May","Jun",
                    "Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("%02d-%s-%d\n", d, months[m-1], y);
    return 0;
}
