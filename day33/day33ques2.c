//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int a[20], n, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = n;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > element)
        {
            position = i;
            break;
        }
    }

    for(int i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = element;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

