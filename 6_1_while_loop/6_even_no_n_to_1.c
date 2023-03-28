#include<stdio.h>

void main()
{
    int i,start;
    printf("enter the start value:-");
    scanf("%d",&start);
    
    i = start;
    while(i>=1)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
        i--;
    }
}