#include<stdio.h>
void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i ; j>=1  ; j--)
        {
            if((i+j)%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}