#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,k;
    char s[100];
    char ch;
    printf("\nEnter the number of letters in the biggest word\n");
    scanf("%d",&n);
    printf("\nEnter the number of words in the sentence\n");
    scanf("%d",&k);
    printf("\nEnter the sentence\n");

    for (i=0;i<=(n+1);i++)
    {
        printf("*");
        if ((ch=getche())==" "||(ch=getche())=='\n'||(ch=getche())=='\r')
            printf("\n");
        for (j=0;j<=(k+1);j++)
        {
         while ((ch=getche())!=""||(ch=getche())!='\n'||(ch=getche())!='\r')
         printf("*");
        }
    }


}
