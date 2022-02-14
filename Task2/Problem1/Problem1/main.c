#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,p;
    printf("\nEnter the number n\n");
    scanf("%d",&n);
    if (n>1)
    {
        printf(" 2 ");
        for (i=2;i<=n;i++)
        {
            if ( i%i==0 && i%2 !=0)
                printf("  %d  ",i);
        }
    }
    else printf("\nEnter a bigger number ");
}
