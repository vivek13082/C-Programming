#include<stdio.h>
int main()
{
    float bs,da,hra,tax,ttls;
    printf("Enter basic salary");
    scanf("%f",&bs);
    printf("Enter da(%%), hra(%%), tax(%%)");
    scanf("%f%f%f",&da,&hra,&tax);
    ttls=bs+((bs*(da+hra-tax))/100);
    printf("Total Salary will be =%f",ttls);
    return 0;
}