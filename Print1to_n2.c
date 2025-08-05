#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter N");
    scanf("%d",&n);
    do
    {
        printf("\n%d",i);
        i++;
    } while (i<=10);
    return 0;
}