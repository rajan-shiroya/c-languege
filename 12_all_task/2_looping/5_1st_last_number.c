//WAP to find 1st and last number of given number.


#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    
    int last_digit;

    last_digit = num % 10;
    printf("\nLast digit is: %d", last_digit);

    int first_digit;

    while(num>=10)
    {
        num = num/10;
    }
        first_digit = num;

    printf("\nFirst digit is: %d",first_digit);

}