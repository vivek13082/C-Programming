#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf(" %d",(i+j)%n+1);
        }
        printf("\n");
    }
    return 0;
    
}