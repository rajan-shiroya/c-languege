//WAP to swap first and last number.

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

    printf("\nFirst digit is %d: ",first_digit);

    first_digit = first_digit + last_digit;
    last_digit = first_digit - last_digit;
    first_digit = first_digit - last_digit;

    printf("\nAfter swapping first digit is: %d ",first_digit);
    printf("\nAfter swapping last digit is: %d", last_digit);

}