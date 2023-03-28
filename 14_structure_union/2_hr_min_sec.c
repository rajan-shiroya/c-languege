//convert into hh:mm:ss using structure.


#include<stdio.h>

struct var
{
    int hr, min, sec;
};

void main()
{
    struct var m1,m2,m3,m4;

    printf("Enter the value of 1st hour: ");
    scanf("%d",&m1.hr);

    printf("Enter the value of 2nd hour: ");
    scanf("%d",&m2.hr);

    printf("Enter the value of 1st minute: ");
    scanf("%d",&m1.min);

    printf("Enter the value of 2nd minute: ");
    scanf("%d",&m2.min);

    printf("Enter the value of 1st second: ");
    scanf("%d",&m1.sec);

    printf("Enter the value of 2nd second: ");
    scanf("%d",&m2.sec);

    m3.sec = (m1.sec + m2.sec);
    m3.min = (m1.min + m2.min);
    m3.hr = (m1.hr + m2.hr);

    m4.sec = (m3.sec)%60;
    m4.min = (m3.min%60) + (m3.sec/60);
    m4.hr = (m3.hr) + (m3.min/60) + (m3.sec/3600);

    printf("\nHour is :%d",m4.hr);
    printf("\nMin is :%d",m4.min);
    printf("\nSec is :%d",m4.sec);

    printf("\nTime is:  %d hr : %d min  : %d sec ",m4.hr, m4.min, m4.sec);


}
