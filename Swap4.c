#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nBefore a=%d b=%d",a,b);
    a=a^b;b=a^b;a=a^b;
    printf("\nAfter a=%d b=%d",a,b);
    return 0;

}