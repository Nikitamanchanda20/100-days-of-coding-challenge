// Delete an element from an array.
#include <stdio.h>

int main()
{
    int i, n, a[5], x;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be removed: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            break;
        }
    }

    if(i == n)
    {
        printf("Element not found");
    }
    else
    {
        for(; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
