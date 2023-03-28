#include<stdio.h>
void main()
{
    int i,j,s;

    for(i=1;i<=5;i++)
    {
        for(s=i;s<=4;s++)
        {
            printf("_ ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
}