#include<stdio.h>

void main()
{
    int i, start=2000, end = 3000;
    i = start;

    while(i<=end)
    {
        if(i % 4 == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}