#include<stdio.h>
void main()
{
    int i,j,s;
    // char ch ='A';

    for(i='A';i<='E';i++)
    {
        for(s='D';s>=i;s--)
        {
            printf("_ ");
        }

        for(j=i;j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}