#include<stdio.h>

void main()
{
    int i,end;
    printf("enter end value:-");
    scanf("%d",&end);
    
    i = 1;
    
    do
    {
        if(i % 2 == 1)
        {
            printf("%d\n",i);
        }
        i++;
    }
    while(i<=end);
}