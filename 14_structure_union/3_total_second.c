//Convert total seconds into hh:mm:ss using structure.

#include<stdio.h>

struct var
{
    int sec,min,hr;
};

void main()
{
    struct var m1,m2;

    printf("Enter the total second: ");
    scanf("%d",&m1.sec);

    m2.sec = m1.sec%60;
    printf("sec: %d",m2.sec);

    m2.min = m1.sec/60;
    printf("\nMin: %d",m2.min);

    m2.hr = m2.min/60;
    printf("\nHour: %d",m2.hr);

}