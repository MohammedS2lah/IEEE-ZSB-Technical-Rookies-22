#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,method1,method2;

    printf("\nEnter the number of pages\n");
    scanf("%d",&n);
    printf("\nEnter the page you want\n");
    scanf("%d",&p);

    method1=p/2;
    method2=(n-p)/2;
    if (method1<method2)
        printf("\nThe minimum number of pages to turn is %d",method1);
    else printf("\nThe minimum number of pages to turn is %d",method2);

}
