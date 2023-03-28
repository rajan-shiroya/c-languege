//WAP to convert given string in titlecase

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the string: ");
    scanf("%d",&n);

    char str[n];
    printf("\nEnter any string: ");
    scanf("%s",&str);
    
    if(str[0]>=65 && str[0]<=90)
    {
        str[0] = str[0];
    }
    else
    {
        str[0] = str[0]-32;
    }

    int i;

    for(i=1;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
    {
        str[i]= str[i] + 32;
    }
    else
    {
        str[i] = str[i];
    }

    }

    printf("String in titlecase is: %s",str);

}