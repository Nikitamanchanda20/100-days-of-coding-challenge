//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int i, j, n;

    scanf("%s", a);
    scanf("%s", b);

    n = strlen(a);

    if(n != strlen(b))
    {
        printf("Not Rotation");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[j] != b[(i+j)%n])
                break;
        }

        if(j == n)
        {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not Rotation");

    return 0;
}
