#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    char str[1000];
    int h = strlen(str);

    printf("\nEnter the string to check\n");
    gets (str);

    while (h > 2)
    {
        if (str[i++] != str[h--])
            printf("No\n");
        else printf("Yes\n");
    }

}
