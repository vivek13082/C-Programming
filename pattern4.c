#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a Number");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= n; j++)
        {
            if(i==j)
            printf(" #");
            else
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}