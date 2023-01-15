#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int b[n],a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
        b[i]++;
    }
}