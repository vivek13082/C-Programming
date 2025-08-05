#include <stdio.h>
int main()
{
    int n, i, result = 0;
    printf("Enter Number To Be Reversed: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int rem = n % 10;
        result = result * 10 + rem;
        n = n / 10;
    }

    printf("Reversed no: %d", result);
    return 0;
}