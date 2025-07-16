#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swapping a=%d b=%d",a,b);
    a=a+b-(b=a);
    printf("\nValues after swapping a=%d b=%d",a,b);
    return 0;
}