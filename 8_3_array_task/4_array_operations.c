

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int element[n],i;

    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        scanf("%d",&element[i]); 
       
    }

    printf("\nelements are...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",element[i]);
    }

    int choice;
    printf("\n\nFor array operation....\n");
    printf("press 1 for Insert an element\n");
    printf("press 2 for delete an element\n");
    printf("press 3 for update an element\n");
    printf("Enter your choice:-");
    scanf("%d",&choice);

    
   
    switch(choice)
    {
       
        case 1:
            printf("\nInsert operation...\n");
            int position_i;
            printf("\nEnter the position you want to insert an element: ");
            scanf("%d",&position_i);
            int new_element2;
            printf("\nEnter the new element value: ");
            scanf("%d",&new_element2);

            int size = n+1;
         

            for(i=position_i;i<size;i++)
            {
                
                element[i+1] = element[i];
                element[position_i]=new_element2;
                // element[i]=element[position_i];
                // element[position_i]=new_element2;
                
            }

            printf("\nAfter inserting element array is..");
            for(i=0;i<size;i++)
            {
                printf("%d ",element[i]);
            }
            
         

            break;
           
        case 2:
            printf("\nDelete operation...\n");
            int position_d;
            printf("\nEnter the position you want to delete an element: ");
            scanf("%d",&position_d);

            if(position_d==0 || position_d<n)
            {
                for(i=position_d;i<n;i++)
                {
                    element[i] = element[i+1];
                }

                printf("\nAfter deleting element array is..");
                for(i=0;i<n-1;i++)
                {
                    printf("%d ",element[i]);
                }

            }
            else
            {
                printf("\nPlease check your position...!!");
            }
          
            break;
              
        case 3:
            printf("\nUpdate operation...\n");
            int position_u=n;

            printf("\nEnter the position you want to update an element: ");
            scanf("%d",&position_u);

            int new_element;
            if(position_u==0 || position_u<n)
            {
                printf("Enter the new element: ");
                scanf("%d",&new_element);
                element[position_u] = new_element;
            }
            else
            {
                printf("\nPlease check your position...!!");
            }

            printf("\nAfter updating array is..");
            for(i=0;i<n;i++)
            {
                printf("%d ",element[i]);
            }

            break;
       
       
        default:
            printf("Invalid choice...");
            break;
    }


}
