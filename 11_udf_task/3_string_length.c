//WAP to find length of the string by passing string/character array as an argument using UDF.

#include<stdio.h>


int len(str)
{
    return strlen(str);

}

void main()
{

    char str[30];
    printf("\nEnter the string: ");
    scanf("%s",&str);

    printf("\nString is: %s",str);

    int l;
    l = len(str);
    printf("\nLength is: %d",l);

}