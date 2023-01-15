#include<stdio.h>
int main()
{
    int size,i,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("the array :");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("the sum of the array %d",sum);
    printf("\n");
}