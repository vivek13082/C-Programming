#include<stdio.h>
int main()
{
    int i,j,n,ch;
    printf("Enter number of rows");
    scanf("%d",&n);
    ch='A';
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}