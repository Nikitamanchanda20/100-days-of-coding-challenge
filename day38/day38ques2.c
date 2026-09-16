// Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[2][2], i, j;

    printf("Enter matrix:\n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[i][j] != a[j][i])
            {
                printf("Not Symmetric");
                return 0;
            }
        }
    }

    printf("Symmetric");

    return 0;
}
