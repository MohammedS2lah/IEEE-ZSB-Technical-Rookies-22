#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,k;
    char s[100];
    char ch;

    printf("\nEnter the sentence\n");
    //To get the number of letters in the longest word
    for (i=0;s[i] !='\0';i++)
    {
        if (s[i] !='')
            letters++;
        if(letters>n)
            n=letters;
            if (s[i] = '')
                k++;
    }
    else letters=0;
    for (i=0;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    while(s[i]!= NULL)
    {
        printf("%c",s[i]);
    if ( s[i]=='' || s[i]=='\n' )
        printf("\n");

    }
    for (i=0;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");

}
