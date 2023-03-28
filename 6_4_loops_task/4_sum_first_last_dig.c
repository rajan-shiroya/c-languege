// first and last digit sum

#include<stdio.h>

void main()
{
    int num;

    printf("enter the number: ");
    scanf("%d",&num);

    
    int last_digit;

    last_digit = num % 10;
    printf("\nlast digit is: %d", last_digit);

    int first_digit;

    while(num>=10)
    {
        num = num/10;
    }
        first_digit = num;

    printf("\nfirst digit is %d: ",first_digit);



    int sum;
    sum = first_digit + last_digit;
    printf("\nsum is: %d",sum);
}