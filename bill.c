#include <stdio.h>

main()
{
    int u;
    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
    scanf("%d", &u);

    
    if(u <= 50)
    {
        amt = u * 0.50;
    }
    else if(u <= 150)
    {
        amt = 25 + ((u-50) * 0.75);
    }
    else if(u <= 250)
    {
        amt = 100 + ((u-150) * 1.20);
    }
    else
    {
        amt = 220 + ((u-250) * 1.50);
    }

    
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %f", total_amt);

}
