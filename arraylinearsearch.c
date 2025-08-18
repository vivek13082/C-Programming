#include <stdio.h>
int main()
{
    int a[50], i, n, key;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            break;
    }
    if (i == n)
        printf("Not Found");
    else
        printf("found");
    return 0;
}