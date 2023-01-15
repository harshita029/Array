#include<stdio.h>
void main()
{
    int size,i,count=0,count2=0;
    printf("Enter the size of the element:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
           count++;
        else
           count2++;   
    }
    printf("%d are odd and %d are even in this array.",count2,count);
}