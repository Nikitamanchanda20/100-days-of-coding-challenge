//  Rotate an array to the right by k position.
#include <stdio.h>

int main()
{
    int a[5], i, k, temp;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    while(k > 0)
    {
        temp = a[4];

        for(i = 4; i > 0; i--)
            a[i] = a[i-1];

        a[0] = temp;

        k--;
    }

    printf("Array after rotation: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
