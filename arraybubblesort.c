#include<stdio.h>
int main()
{
    int a[50],i,j,n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    printf("After Sorting \n");
    for ( i = 0; i < n; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
    
    
    
}