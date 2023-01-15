#include<stdio.h>
void main()
{
    int size,i,search;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]); 
    }
    printf("Enter the number to search:");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            printf("%d found at index %d",search,i);
            //count++;
            break;
        }      
    }
    //printf("%d times %d found at in this array.",count,search);
    printf("Not found.");
    printf("\n");
}
