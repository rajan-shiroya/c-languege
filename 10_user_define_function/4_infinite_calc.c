//WAP to create infinite calc using UDF, switch case and loop

#include<stdio.h>
#include<stdlib.h>


int addition(int a,int b)
{   
    return a + b;  
}

int substraction(int a,int b)
{
    return a - b;  
}

int multiplication(int a,int b)
{
    return  a * b;
}

int division(int a, int b)
{
    return  a / b;
}

int modulo(int a,int b)
{
    return  a % b;
}


void main()
{
    int a,b,choice;
    do
    {
        // int a,b;
        printf("\nEnter the value of a: ");
        scanf("%d",&a);

        printf("\nEnter the value of b: ");
        scanf("%d",&b);

        // int choice;
        printf("\n\nFor Calculation....\n");
        printf("press 1 for addition\n");
        printf("press 2 for substraction\n");
        printf("press 3 for multiplication\n");
        printf("press 4 for division\n");
        printf("press 5 for modulo\n");
        printf("press 0 for exit\n\n");
    
        scanf("%d",&choice);
        int ans;

        switch(choice)
        {
            case 1:     
                // addition(a,b);     
                ans = addition(a,b);
                printf("\nAnswer is : %d",ans);  
                      
            break;
            
            case 2:          
                ans = substraction(a,b);
                printf("\nAnswer is : %d",ans);  
            break;

            case 3:          
                ans = multiplication(a,b);
                printf("\nAnswer is : %d",ans);  
                
            break;

            case 4:          
                ans = division(a,b);
                printf("\nAnswer is : %d",ans);  
            break;

            case 5:          
                ans = modulo(a,b);
                printf("\nAnswer is : %d",ans);  
            break;

            case 0:          
                exit(0);
            break;

            default:
                printf("\nPlease check your input...!!!");
            break;

        } 
    }
    while(choice!=0);   
           
}