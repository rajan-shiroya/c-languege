//Program to find length of string using ponter.

#include<stdio.h>
void main()
{
    char str[20];
    printf("Enter the string: ");
    gets(str);

    // printf("\nString is: ");
    // puts(str);

    // char *ptr[20];
    
    int l;
    l = strlen(str);
    int *s_ptr;
    s_ptr = &l;

    printf("\nLength is: %d",*s_ptr);


}