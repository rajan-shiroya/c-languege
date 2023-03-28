// write C program to print all alphabets from a to z using do while loop

#include<stdio.h>

void main()
{
    
    char i = 'a';

    do
    {
        printf("%c\n",i);
        i++;
    } 
    while (i <= 'z');
    
}