/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.
*/
#include <stdio.h>
int main()
{
 int a[] = {5, 7, 7, 8, 8, 10};
 int target = 8;
 int first = -1, last = -1;
    for(int i = 0; i < 6; i++)
    {
      if(a[i] == target)
        {
         if(first == -1)
            first = i;
            last = i;
        }
    }
    printf("%d, %d", first, last);
    return 0;
}
