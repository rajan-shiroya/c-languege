#include<stdio.h>

void main()
{
    int i,n, result;

    printf("enter the value :");
    scanf("%d",&n);
    
    i = 1;
    while(i<=10)
    {
        result = n * i;
        printf("\n %d *  %d =  %d",n, i, n*i);
        i++;
        
    }

    
}