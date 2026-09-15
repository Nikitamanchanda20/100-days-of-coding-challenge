//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int a[2][3], sum[2];
    int i, j;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        sum[i] = 0;

        for(j = 0; j < 3; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < 2; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
