#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,temp,j;

    printf("\nEnter the number of numbers to sort\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the numbers to sort\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe numbers before sorting\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    for (i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
            if (arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    printf("\nThe numbers After sorting\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }


}
