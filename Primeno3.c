#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("Enter a Number");
    scanf("%d", &n);
    if (n % 2 == 0 || n % 3 == 0)
    {
        printf("Not Prime number");
        return 0;
    }
    else
    {
        for (i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                printf("Not Prime Number");
                return 0;
            }
        }
    }
    printf(" It is a Prime Number");
    return 0;
}