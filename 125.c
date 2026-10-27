/*nclude<stdio.h>
int main()
{
    char str[5];
    for(int m = 0 ; m<5; m++)
    {
        scanf(" %c",&str[m]);
    }
    printf("String:%s",str);
    char rev[5];
    for (int i = 4 ; i >= 0; i--)
    {
        for(int j=0 ; j<5 ; j++)
        {
            rev[j]=str[i];
        }
        
    }
    if(rev[0]==str[4] && rev[1]==str[3] && rev[2]==str[2] && rev[3]==str[1] && rev[4]==str[0])
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
    printf("RReverse: %s",rev);
    return 0;
}


*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[6];
    char rev[6];

    printf("Enter 5 characters: ");
    scanf("%5s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0';

    printf("String: %s", str);
    printf("\nReverse: %s", rev);

    if (strcmp(str, rev) == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }

    return 0;
}
