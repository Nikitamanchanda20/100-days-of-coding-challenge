//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    char n[100];
    int count[10] = {0};
    int i, digit;
    int max = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%s", n);

    for(i = 0; n[i] != '\0'; i++)
    {
        digit = n[i] - '0';
        count[digit]++;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("Digit occurring most times = %d", ans);

    return 0;
}
