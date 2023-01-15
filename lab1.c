#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);

    }
    printf("Unsorted array is ");
    for(i=0;i<n;i++)
    { 
        printf("%d ",a[i]);
    }
    printf("\n");
    //to sort the array using bubble sort.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //for sum of the largest and smallest number.
    int sum;
    sum=a[0]+a[n-1];
    printf("the sum of the smallest and the largest number is: %d ",sum);
    //to find the second largest number in the array.
    printf("The second largest no is %d",a[n-2]);
    printf("\n");
    //implementing binary search.
    int sele,first,last,mid;
    printf("Enter the element to found:");
    scanf("%d",&sele);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==sele)
        {
            printf("Element found\n");
            break;

        }
        else if (a[mid]>sele)
           last=mid-1;
        else if(a[mid]<sele)
          last=mid+1;   
    }
}