#include <stdio.h>
int main()
{
    int a[50], i, n, key, cnt = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be searched");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cnt++;
        }
    }
    if (cnt > 0)
        printf("Element occured %d times", cnt);
    else
        printf("Element did not occur ");
    return 0;
}