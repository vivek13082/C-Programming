#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = n-1; j >= i; j--)
        {
            printf(" %c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}