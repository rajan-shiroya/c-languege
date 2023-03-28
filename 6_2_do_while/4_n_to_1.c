#include<stdio.h>

void main()
{

int i,start;
printf("Enter the start value:");
scanf("%d",&start);
i = start;

do
{
    printf("%d\n",i);
    i--;
}
while (i>=1);
}