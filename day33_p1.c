/*
 * Q65: Search in a sorted array using binary search.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], key, lo=0, hi, mid;
    printf("Enter size of sorted array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    hi=n-1;
    while(lo<=hi) {
        mid=(lo+hi)/2;
        if(a[mid]==key) { printf("Found at index %d\n",mid); return 0; }
        else if(a[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    printf("Not found\n");
    return 0;
}
