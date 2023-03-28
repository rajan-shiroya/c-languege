//WAP to count number of digits in a number

#include<stdio.h>

void main()
{
    int i=0, num;
    printf("enter the value: ");
    scanf("%d",&num);

    while(num>0)
    {
        num = num/10;
        i++;
    }

    printf("\nno.of digits are: %d",i);
}