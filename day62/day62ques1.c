//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;
	int value;
	if (scanf("%d", &value) != 1)
		return 0;
	int current_sum = value;
	int max_sum = value;
	for (int i = 1; i < n; i++) {
		if (scanf("%d", &value) != 1)
			return 0;
	current_sum = value > current_sum + value
						  ? value
						  : current_sum + value;
		if (current_sum > max_sum)
			max_sum = current_sum;
	}
	printf("%d\n", max_sum);
	return 0;
}
