#include<stdio.h>

void main()
{
    int price, rate, time, simple_interest;
    price = 100000;
    rate = 4;
    time = 2;
    simple_interest = (price * rate * time)/100;
    printf("simple interest is: %d",simple_interest);
  
}