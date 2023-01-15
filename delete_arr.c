#include<stdio.h>
int main()
{
    int size,i,del;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("Enter the index of the element to be deleted :");
    scanf("%d",&del);
    for(i=del;i<size-1;i++)
    {
        a[i]=a[i+1];
        printf("%d",a[i]);
    }
    a[size-1]=0;
    printf("updated array is:");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}