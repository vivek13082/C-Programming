#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
    printf("Greatest is:%d",a);
    else if (b>c && b>a)
    printf("Greatest is:%d",b);
    else
    printf("Greatest is:%d",c);
    return 0;
}