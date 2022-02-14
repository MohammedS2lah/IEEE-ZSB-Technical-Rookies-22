#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,t1=0,t2=1,nextt;
    nextt=t1+t2;
    printf("\n Enter the number of terms \n");
    scanf("%d",&n);

    printf("Fibonacci series is : %d  %d ",t1,t2);

    for (i=3;i<=n;i++)
    {
        printf(" %d ",nextt);
        t1=t2;
        t2=nextt;
        nextt=t1+t2;
    }
}

