#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a Number");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j)
                printf(" #");
            else
                printf(" *");
        }
        printf("\n");
    }
    return 0;
}