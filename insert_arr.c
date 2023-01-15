#include<stdio.h>
int main()
{
    int size,i,value;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size+10];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    for(i=size;i>0;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the value to be updated: ");
    scanf("%d",&value);
    a[0]=value;
    for(i=0;i<=size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}