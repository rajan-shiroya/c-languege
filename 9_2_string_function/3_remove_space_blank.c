//WAP to remove spaces, blanks from a string

#include<stdio.h>
void main()
{
    char str[50];
    printf("Enter the string: ");
    gets(str);
   
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == ' ')
        {
            for(j=i;j<strlen(str);j++)
            {
                str[j] = str[j+1];
            }
           
        }
        else
        {
            str[i] = str[i];
        }
    }
    printf("\nAfter removing space string is : ");
    puts(str);


}