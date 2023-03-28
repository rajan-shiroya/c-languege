//WAP to check whether a string is palindrome or not

#include<stdio.h>
void main()
{
    char str[20];

    printf("Enter a string : ");
    gets(str);

    printf("\nString is : ");
    puts(str);

    char str2[20];
    strcpy(str2, str);

    printf("\nSecond string is : ");
    puts(str2);

    strrev(str2);
    printf("\nAfter reverse second string : ");
    puts(str2);


    if(strcmp(str, str2)==0)
    {
        printf("\nString is palindrome...!!");
    }
    else
    {
        printf("\nString is not palindrome...!!");
    }


}