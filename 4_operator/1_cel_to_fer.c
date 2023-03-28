#include<stdio.h>

void main()
{
    int cel, fer;
    printf("Enter the celsius :- ");
    scanf("%d",&cel);
    printf("\n");

    fer = (1.8*cel) + 32;
    printf("Fehrenheit is : - %d",fer);
}