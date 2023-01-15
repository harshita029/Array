#include<stdio.h>
void main()
{
    int i,j,n,value,tep=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j+1])
            {
                tep=a[i];
                a[i]=a[j+1];
                a[j+1]=tep;
            }
        }   
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}