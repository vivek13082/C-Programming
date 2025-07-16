#include<stdio.h>
int main(){
    float radius,area;
    printf("Enter Radius of Circle");
    scanf("%f",&radius);
    area=3.14*(radius*radius);
    printf("Area of given circle is %f",area);
    return 0;
}