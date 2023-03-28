    #include <stdio.h>  
    int main ()  
    {  
        int i, j; 
        int num1, num2;       
        printf (" Enter the first number from to get the table: ");  
        scanf (" %d", &num1);  
        printf (" Enter the last number: ");  
        scanf (" %d", &num2);  
        
        if(num1<=num2){
	
        for (i = num1; i <= num2; i++)  
        {  
            num1 = i; 
           
            printf (" Table of %d  ", num1);  
            for (j = 1; j <=10; j++)  
            {  
                printf("\n %d X %d = %d",num1,j, num1 * j);  
            }         
            printf (" \n");  
         }  
     }
     
     else{
     	printf("invalid input........");
	 }
          
           
    }  
