#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j,c,count=0;

    printf("\nEnter the number of socks\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the colours of socks\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
    c=1;
    if(arr[i]!=0)
     {
       for(j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
          {
            c++;
            arr[j]=0;
          }
        }
    count+=c/2;
     }
    }
printf("\nNumber of pairs is %d\n",count);
}
