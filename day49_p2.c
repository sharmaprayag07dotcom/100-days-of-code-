/*
 * Q98: Print initials of a name with the surname displayed in full.
 * Input: John Michael Smith → Output: J. M. Smith
 */
#include <stdio.h>
#include <string.h>
int main() {
    char words[10][100];
    int n=0, i;
    char line[500];
    printf("Enter name: ");
    fgets(line,500,stdin);
    char *token=strtok(line," \n");
    while(token) { strcpy(words[n++],token); token=strtok(NULL," \n"); }
    for(i=0;i<n-1;i++) printf("%c. ",words[i][0]);
    printf("%s\n",words[n-1]);
    return 0;
}
