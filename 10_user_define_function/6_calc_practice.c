//WAP to create infinite calc using UDF, switch case and loop

#include<stdio.h>
#include<stdlib.h>
 

int addition(int a,int b)
{   
    return a + b;  
}


void main()
{
    int a,b,choice;
    printf("\nEnter the value of a: ");
    scanf("%d",&a);

    printf("\nEnter the value of b: ");
    scanf("%d",&b);

    do
    {
        // int a,b;
       
        // int choice;
        printf("\n\nFor Calculation....\n");
        printf("press 1 for addition\n");
        
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
            
            
            case 0:          
                exit(0);
            break;

            default:
                printf("\nPlease check your input...!!!");
            break;

            

        } 
        a = ans;
        int c;
        printf("\nEnter new value: ");
        scanf("%d",&c);
        b = c;
    }
    while(choice!=0);   
           
}