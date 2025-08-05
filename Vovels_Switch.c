#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any Alphabet\n");
    scanf("%c",&ch);
    ch=tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("It is a Vovel");
        break;
    
    default:printf("It is not a Vovel");
        break;
    }
    return 0;
}