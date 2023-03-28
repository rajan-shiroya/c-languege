#include<stdio.h>
void main()
{
    int i,j,s;

    for(i='A';i<='E';i++)
    {
        for(s=i;s<='D';s++)
        {
            printf("_ ");
        }

        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}