#include<stdio.h>
int main()
{
    int n,i,j;
    n=5;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" %c",'E'-j);
        }
        printf("\n");
    }
    return 0;
}   