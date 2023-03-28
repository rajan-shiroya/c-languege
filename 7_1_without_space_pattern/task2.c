#include<stdio.h>
void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
            printf("| ");
            }
            else if (i==5 && j>=2 && j<5)
            {
                printf("_ ");
            }
            else if(i==j)
            {
                printf("\\ ");
            }
            
            else
            {
            printf("_ ");
            }
        }

        printf("\n");
    }

}