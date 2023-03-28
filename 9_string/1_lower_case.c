//WAP to convert given character in lowercase

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(ch>=90 && ch<=122)
    {
        printf("Character in lower case: %c",ch);
    }
    else
    {
        printf("Character in lower case: %c",ch+32);
    }
}