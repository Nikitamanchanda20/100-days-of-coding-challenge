//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum numbers
{
    ONE = 10,
    TWO = 11,
    THREE = 12,
    FOUR = 13,
    FIVE = 14
};

int main()
{
    printf("%d\n", ONE);
    printf("%d\n", TWO);
    printf("%d\n", THREE);
    printf("%d\n", FOUR);
    printf("%d\n", FIVE);

    return 0;
}
