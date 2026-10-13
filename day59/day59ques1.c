//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() 
{
    int n, k, i, j, sum, max;
    int arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    max = -999999;
    for(i=0; i<=n-k; i++) 
   {
     sum = 0;
     for(j=i; j<i+k; j++)
      sum = sum + arr[j];
      if(sum > max)
      max = sum;
    }
    printf("%d", max);
    return 0;
}
