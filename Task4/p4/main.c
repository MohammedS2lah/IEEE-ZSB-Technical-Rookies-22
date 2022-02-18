#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[100];
   int i,j,n,m,count=0;

   printf("\nEnter the string repeated\n");
   gets(s);
   printf("\nEnter the numbers of repeat\n");
   scanf("%d",&n);
   m = strlen(s);
   for (i=0;i<m;i++)
   {
       if (s[i]=='r')
        count++;
   }
    count=count*(n/m);
    j=n%m;
    for (i=0;i<j;i++)
    {
       if (s[i]=='r')
        count++;
    }
    printf("\nNumber of r is %d",count);
}
