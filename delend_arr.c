#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    a[n-1]=0;
    printf("\nThe updated array:");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}