//String functions 
// gets(variable_name) 
// puts(variable_name)
// strlen(var_name)
// strupr(var_name)
// strlwr(var_name)
// strrev(var_name)
// strcpy(var2, var1)
// strcmp(var1, var2)  
// strcat(var1, var2)

#include<stdio.h>
void main()
{
    char str[30];
    
    printf("Enter a string: ");
    gets(str);

    printf("\nString is : ");
    puts(str);

    int len;
    len = strlen(str);
    printf("\nString length is: %d",len);

    strupr(str);
    printf("\nAfter uppercase string is : ");
    puts(str);

    strlwr(str);
    printf("\nAfter lowercase string is : ");
    puts(str);

    strrev(str);
    printf("\nAfter reverse string is : ");
    puts(str);

    strrev(str);
    printf("\nAgain reverse string is : ");
    puts(str);

    char str2[30];
    strcpy(str2, str);

    printf("\nNew string is (str2): ");
    puts(str2);

    strcmp(str, str2);


    char name[30],lname[30];

    printf("\nEnter first name: ");
    gets(name);

    printf("\nEnter last name: ");
    gets(lname);

    strcat(name, lname);
    printf("\nConcating string is: ");
    puts(name);


}