#include<stdio.h>
void main()
{
    int i,j,s;

    for(i='E';i>='A';i--)
    {
        for(s='D';s>=i;s--)
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