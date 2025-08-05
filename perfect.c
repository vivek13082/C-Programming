#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter Number to be checked");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n && n!=0)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}