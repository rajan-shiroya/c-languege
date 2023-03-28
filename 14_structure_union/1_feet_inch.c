//feet and inch program using structure.

#include<stdio.h>

struct var{
    int feet, inch;
};

void main()
{
    struct var m1, m2, m3;

    printf("Enter the value of Feet-1: ");
    scanf("%d",&m1.feet);

    printf("Enter the value of Feet-2: ");
    scanf("%d",&m2.feet);

    printf("Enter the value of Inch-1: ");
    scanf("%d",&m1.inch);

    printf("Enter the value of Inch-2: ");
    scanf("%d",&m2.inch);

    m3.inch = (m1.inch + m2.inch)%12;
    m3.feet = (m1.feet + m2.feet) + ((m1.inch + m2.inch)/12);

    printf("\nFeet is: %d",m3.feet);
    printf("\nInch is: %d",m3.inch);

}