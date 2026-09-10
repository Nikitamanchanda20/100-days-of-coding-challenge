/*
Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    for(i = 1; i <= 5; i++)
    {
        if(i == 1 || i == 5)
            n = 1;
        else if(i == 2)
            n = 3;
        else if(i == 3)
            n = 4;
        else
            n = 5;

        for(j = 1; j <= n; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
