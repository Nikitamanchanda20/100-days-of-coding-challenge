//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, j, start;

    scanf("%[^\n]", s);

    start = 0;

    for(i = 0; i <= strlen(s); i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            for(j = i - 1; j >= start; j--)
                printf("%c", s[j]);

            if(s[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
