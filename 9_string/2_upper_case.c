//WAP to convert given character in upercase

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("Character in Upper case: %c",ch);
    }
    else
    {
        printf("Character in Upper case: %c",ch-32);
    }
}