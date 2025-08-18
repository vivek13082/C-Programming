#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,avg=0;
    printf("Enter N");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    sum=sum+a[i];
    printf("avg= %d",sum/n);
    return 0;
}