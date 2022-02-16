#include <stdio.h>
int main()
{
    int n,i;
    int bird[100];
    int freq[6]={0};

    printf("\nEnter the number of birds\n");
    scanf("%d", &n);
    printf("\nEnter the IDs of birds\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf(" %d" , &bird[i]);
        freq[ bird[i] ]++;
    }

    int MFType = 1;
    int MFreq = freq[1];

    for( i = 1 ; i < 6 ; i++)
    {
        if( freq[i] > MFreq)
        {
            MFType = i;
            MFreq = freq[i];
        }
    }
    printf("\nThe most frequent ID is %d\n",MFType);
}
