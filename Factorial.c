#include<stdio.h>
int main()
{
    int fact=1,i,n,no;
    printf("Enter number to calculate its factorial:\n");
    scanf("%d",&n);
    no=n;
    while (n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of %d is: %d",no,fact);
    return 0;
}
