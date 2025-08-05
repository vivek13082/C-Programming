#include<stdio.h>
int main()
{
    int x,y,result=1,i=1;
    printf("Enter value of x and power y");
    scanf("%d%d",&x,&y);
    while (i<=y)
    {
        result=result*x;
        i++;
    }

    printf("The %ds power %d is: %d",x,y,result);
    return 0;
}