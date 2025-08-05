#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows");
    scanf("%d",&n);
    for (i = n; i > 0; i--)
    {
        for ( j = 1; j <= n; j++)
        {
            if((n+1-i)==j || (i==j))
            printf(" #");
            else
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}