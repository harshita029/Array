#include <stdio.h>
void main() 
{ 
    int i,j,n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements in the 1st array:");
        scanf("%d",&a[i]);
        printf("Enter the element os 2nd array:");
        scanf("%d",&b[i]);
    }
    for(i=1;i<=4;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==1)
            {
                if(j==0)
                    printf("Sum of both array\n");
                c[j]=a[j]+b[j];
                printf("%d\n",c[j]);    
            }
            else if(i==2)
            {
                if(j==0)
                    printf("difference of both array\n");
                c[j]=a[j]-b[j];
                printf("%d\n",c[j]);
            }
            else if(i==3)
            {
                if(j==0)
                    printf("product of both array\n");
                c[j]=a[j]*b[j];
                printf("%d\n",c[j]);
            }
            else if(i==4)
            {
                if(j==0)
                    printf("remainder of both array\n");
                c[j]=a[j]%b[j];
                printf("%d\n",c[j]);
            }
        }
    }
}