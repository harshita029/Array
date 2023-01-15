#include<stdio.h>
int main()
{
    int size,i;
    float sum=0,avg;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/size;
    printf("the array :");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe sum of the array:%0.2f",sum);
    printf("\nthe average of the array:%0.2f",avg);
    printf("\n");
}