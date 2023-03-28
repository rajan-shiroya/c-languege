//enter a number print is reverse and check weather number is palindrome or not

#include<stdio.h>

void main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    int rev=0, temp;
    temp = num;
    while(num > 0)
    {
        rev = (rev*10) + (num%10);
        num = num/10;
    }

    printf("\n reverse number is: %d ", rev);
    printf("\n");

    if(rev == temp)
    {
        printf("\nnumber is palindrome....");
    }
    else
    {
        printf("number is not palindrome....");
    }
}