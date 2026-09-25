//Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0, max = 0;
    char word[100], longest[100];

    fgets(str,100,stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            word[length] = str[i];
            length++;
        }
        else
        {
            if(length > max)
            {
                max = length;
                for(int j = 0; j < length; j++)
                    longest[j] = word[j];
                longest[length] = '\0';
            }

            length = 0;
        }
    }

    if(length > max)
    {
        max = length;

        for(int j = 0; j < length; j++)
            longest[j] = word[j];

        longest[length] = '\0';
    }

    printf("Longest word = %s", longest);

    return 0;
}
