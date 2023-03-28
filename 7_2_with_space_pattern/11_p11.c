#include<stdio.h>
void main()
{
    int i,j,s;

    for(i=5;i>=1;i--)
    {
        for(s=i;s<=4;s++)
        {
            printf("_ ");
        }

        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}