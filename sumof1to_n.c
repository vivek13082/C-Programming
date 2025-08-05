#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter N");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum += i;
    }
    printf("\nAddition of %d to %d is %d",1,n,sum);
    return 0;
}