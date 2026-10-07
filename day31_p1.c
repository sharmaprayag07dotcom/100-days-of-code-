/*
 * Q61: Search for an element in an array using linear search.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], key, found=-1;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) if(a[i]==key) { found=i; break; }
    if(found>=0) printf("Found at index %d\n",found);
    else printf("Not found\n");
    return 0;
}
