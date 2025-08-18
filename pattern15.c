#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
        printf("  ");
        for(j=0;j<=i-1;j++)
        printf(" %c",'A'+j);
        printf("\n");
    }
    return 0;
}