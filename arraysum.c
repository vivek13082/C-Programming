#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter Value of N");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
     scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
        sum=sum+a[i];
    printf("Sum of given numbers: %d",sum);
    return 0;
    
    
}