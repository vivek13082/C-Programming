#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            printf("*");
            else if(i==j||i+j==6)
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}