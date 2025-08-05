#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, cnt = 0, rem;
    int result = 0;

    printf("Enter Number to be checked: ");
    scanf("%d", &n);

    temp = n;

    // Count digits
    int num = n;
    while(num > 0)
    {
        cnt++;
        num = num / 10;
    }

    // Calculate sum of powers
    num = n;
    while(num > 0)
    {
        rem = num % 10;
        result += (int)(pow(rem, cnt) + 0.5);  // Round to nearest int
        num = num / 10;
    }

    if(result == temp)
        printf("It's an Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
