#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,ltrsum=0,rtlsum=0,def;
    int arr[100][100];

    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    printf("\nEnter the matrix elements\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
                ltrsum+=arr[i][j];
            if(i==n-j-1)
                rtlsum+=arr[i][j];
        }
    }
    def=abs(ltrsum-rtlsum);
    printf("\nThe absolute diagonal difference is %d",def);

}
