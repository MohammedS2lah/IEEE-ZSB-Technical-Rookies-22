#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,P,w,l;
    printf("\nEnter the length:\n");
    scanf("%f",&l);
    printf("\nEnter the width:\n");
    scanf("%f",&w);
    printf("\nInput:\n%f\n%f",l,w);
    A=w*l;
    P=2*(w+l);
    printf("\n Output:\n%f\n%f",A,P);
}
