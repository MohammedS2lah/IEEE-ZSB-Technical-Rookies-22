#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("\nEnter the number n :\n");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("\nInput:\n%d",n);
        printf("\nOutput:\n%d",sum);
}
