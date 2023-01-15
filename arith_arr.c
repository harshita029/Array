#include<stdio.h>
void main()
{
    int n,i,ch,t=5;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d for first array:",i+1);
        scanf("%d",&a[i]);
        printf("Enter the element %d for second array:",i+1);
        scanf("%d",&b[i]);
    }
    do{
         printf("\n1.Sum\n2.Difference\n3.Product\n4.Remainder\nEnter choice:");
         scanf("%d",&ch);
    for(i=0;i<n;i++)
    {
        if(ch==1)
        {
            c[i]=a[i]+b[i];
            printf("~%d ",c[i]);
        }
        else if(ch==2)
        {
            c[i]=a[i]-b[i];
            printf("%d ",c[i]);
        }
        else if(ch==3)
        { 
            c[i]=a[i]*b[i];
            printf("%d ",c[i]);
        }
        else if(ch==4)
        {
            c[i]=a[i]%b[i];
            printf("%d ",c[i]);
        }
        else
        break;
    }
    }
    while(t--);
    printf("\n");
}    