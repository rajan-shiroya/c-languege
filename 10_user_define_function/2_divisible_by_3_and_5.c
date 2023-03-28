//WAP to find if a given number is divisible by 3 & 5 both or not....using UDF

#include<stdio.h>

divisible(int n)
{
    if((n%3)==0 && (n%5)==0)
    {
        printf("\nValue is divisible by 3 & 5 both...!!");
    }
    else if(n%3==0)
    {
        printf("\nValue is only divisible by 3...!!");
    }
    else if(n%5==0)
    {
        printf("\nValue is only divisible by 5...!!");
    }
    else
    {
        printf("\nValue is neither divisible by 3 nor 5...!!");
    }
}

void main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);

    divisible(n);
}