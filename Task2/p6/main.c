#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum1=0,sum2=0,sum3=0,av1,av2,av3;
    int i,n,j,k;
    char std1[20],std2[20],std3[20],s[20];
    int sd1[20],sd2[20],sd3[20];
    printf("\nEnter the first student name\n");
    gets(std1);
    printf("\nEnter the second student name\n");
    gets(std2);
    printf("\nEnter the third student name\n");
    gets(std3);
    printf("\nEnter the number of grades\n");
    scanf("%d",&n);
    printf("\nEnter grades of first student\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&sd1[i]);
        sum1+=sd1[i];
    }
    printf("\nEnter grades of second student\n");
    for (j=0;j<n;j++)
    {
        scanf("%d",&sd2[j]);
        sum2+=sd2[j];
    }
    printf("\nEnter grades of third student\n");
    for (k=0;k<n;k++)
    {
        scanf("%d",&sd3[k]);
        sum3+=sd3[k];
    }
    av1=(sum1/n);
    av2=(sum2/n);
    av3=(sum3/n);
    printf("\nEnter student name to get his Average\n");
    gets(s);
    if (s[20]==std1[20])
        printf("\n%5.2f",av1);
    else if (s[20]==std2[20])
        printf("\n%5.2f",av2);
    else
        printf("\n%5.2f",av3);
}
