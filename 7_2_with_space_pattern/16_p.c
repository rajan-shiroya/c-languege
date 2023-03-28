#include<stdio.h>
void main()
{
    int i,j,s;

    for(i='A';i<='E';i++)
    {
        for(s='A';s<i;s++)
        {
            printf("_ ");
        }

        for(j=i;j<='E';j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}