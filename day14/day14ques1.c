//Write a program to print the sum of the first n odd numbers
#include <stdio.h>
int main() 
{
int n,sum=0,i,no;
printf("Enter n");
scanf("%d", &n);

for (i=1; i<=n; i++) 
{
no=2*i-1;
sum = sum+no;
}
printf("%d",sum);
return 0;
}

