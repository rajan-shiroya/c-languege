#include<stdio.h>

void main()
{

int i,n;
printf("Enter the value of N:");
scanf("%d",&n);
i = 1;

do
{
    printf("%d\n",i);
    i++;
}
while (i<=n);

}