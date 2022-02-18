#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n,j;
    int csum=0,vsum=0;
    int max,smax,sum=0;
    printf("\nEnter the number of bottles\n");
    scanf("%d",&n);
    int v[n],c[n];
    printf("\nEnter the capacity of each bottle\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        max=c[0];
        if (c[i]>max)
        {
           max=c[i];
        }
    }
    for(j=0;j<n;j++)
    {
        smax=c[0];
        if (c[j]>smax && c[j]<max)
            smax=c[j];
    }
    printf("\nEnter the volume of each bottle\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        vsum=vsum+v[i];
    }
    sum= max+smax;
    if (vsum <= sum)
        printf("\nyes");
    else printf("\nNo");

}
