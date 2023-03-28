// check number is prime or not

#include<stdio.h>
void main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    
    int prime = 0;

    if(num == 0 || num == 1)
    {
        prime = 1;
    }

    int i;

    for(i=2; i<num/2 ; i++)
    {
        if(num%i == 0)
        {
            prime = 1;
        }
    }


    if(prime == 0)
    {
        printf("number is prime number...");
    }
    else
    {
        printf("number is not prime....");
    }
    
}