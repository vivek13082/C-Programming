#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before a=%d b=%d",a,b);
    c=a;a=b;b=c;
    printf("\nAfter Swapping a=%d b=%d",a,b);
    return 0; 
}