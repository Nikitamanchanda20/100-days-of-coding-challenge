//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, copy, place = 1;

    scanf("%d", &n);

    last = n % 10;

    copy = n;

    while(copy >= 10)
    {
        copy = copy / 10;
        place = place * 10;
    }

    first = copy;

    n = n - first * place;
    n = n - last;
    n = n + last * place;
    n = n + first;

    printf("%d", n);

    return 0;
}
