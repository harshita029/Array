#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]); 
    }
    for(i=1;i<size;i++)
    {
        if(a[0]>a[i])
        a[0]=a[i];
    }
    printf("%d is the minimum in this array.",a[0]);

}