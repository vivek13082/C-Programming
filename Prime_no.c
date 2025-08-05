#include<stdio.h>
int main()
{
    int cnt=0,i,n;
    printf("Enter a No: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
        cnt++;    
    }
    if(cnt==2)
    printf("It is a Prime Number");
    else
    printf("Not a Prime Number");
    return 0;
}