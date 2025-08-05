#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter any Number: ");
    scanf("%d", &n);
    printf("This are factors\n");
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d\n", i);
    }
    return 0;
}