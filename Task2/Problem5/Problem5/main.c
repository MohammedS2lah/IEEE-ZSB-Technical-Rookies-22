#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,arr[100];
    int max1,max2;
    printf("\nEnter the number of scores \n");
    scanf("%d",&n);
    printf("\nEnter the scores \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
     for (j=0;j<n;j++)
     {
        if (arr[j]>max2 && arr[j]<max1)
            max2=arr[j];

     }
    }
     printf("\nThe second maximum number is %d",max2);


}
