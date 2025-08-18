#include<stdio.h>
int main()
{
    int a[50],i,n,max=0;
    printf("Enter N");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("maximum is: %d",max);
    return 0;
    

    
}