//Check if two strings are anagrams of each other.
#include <stdio.h>
int main()
{
 char a[100], b[100];
 int i, j, count = 0;
  scanf("%s", a);
  scanf("%s", b);
    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = 0; b[j] != '\0'; j++)
        {
            if(a[i] == b[j])
            {
                count++;
                break;
            }
        }
    }

    if(count == i)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
