//WAP to find minimum and maximum for given user number

#include<stdio.h>

int max_min_val(int min_max[], int max_element[],int min_element[], int n)
{
    int i;

    for(i=1;i<n;i++)
        {
            if(max_element[0]<=max_element[i])
            {
                max_element[0]=max_element[i];         
            }    
            else
            {
                max_element[0]==max_element[0];
            }  
        }
    min_max[0] =  max_element[0];



    for(i=1;i<n;i++)
    {
        if(min_element[0]>=min_element[i])
        {
            min_element[0]=min_element[i];         
        }    
        else
        {
            min_element[0]==min_element[0];
        }  
    }
    min_max[1] = min_element[0];

    return min_max;


}

// int min(int element[], int n)
// {
//     int i;

//     for(i=1;i<n;i++)
//         {
//             if(element[0]>=element[i])
//             {
//                 element[0]=element[i];         
//             }    
//             else
//             {
//                 element[0]==element[0];
//             }  
//         }
//         return element[0];
// }

void main()
{
    int n;
    printf("How many element you want to add:");
    scanf("%d",&n);

    int max_element[n],i;

    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        scanf("%d",&max_element[i]);   
    }

    printf("elements are...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",max_element[i]);
    }

    int min_element[n];
    for(i=0;i<n;i++)
    {
        min_element[i] = max_element[i];
    }



    int min_max[2];

    int result;
    result = max_min_val(min_max,max_element,min_element,n);
    printf("\nmax value is: %d",min_max[0]);
    printf("\nmin value is: %d",min_max[1]);

    // int min_value;
    // min_value = min(element,n);
    // printf("\nmin value is: %d",min_value);

}