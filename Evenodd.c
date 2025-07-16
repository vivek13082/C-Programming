#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n&1)
    printf("Odd Number");
    else
    printf("Even number");
    return 0;
}