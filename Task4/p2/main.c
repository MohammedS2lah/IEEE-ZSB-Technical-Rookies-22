#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand (time(NULL));
    int i,random=0;
    char password[10];
    char num[]="0123456789";
    char sym[]="@#$%&";
    char let[]="abcdefghijkABCDEFGHIJKLMNOPQ";
    random= rand() % 3;
    printf("\nThe random password is\n\n");
    for (i=0;i<10;i++)
    {
        if (random==1)
        {
           password[i]= num[rand()%10];
           random= rand() % 3;
           printf("%c",password[i]);
        }
        else if (random==2)
        {
            password[i]= sym[rand()%5];
            random= rand() % 3;
            printf("%c",password[i]);
        }
        else
        {
            password[i]= let[rand()% strlen(let)];
            random= rand() % 3;
            printf("%c",password[i]);
        }
    }
    return 0;
}
