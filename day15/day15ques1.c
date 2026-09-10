//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
int fact=1,i,n;
printf("Enter no:");
scanf("%d",&n);
for(i=n;i>=1;i--)
  {
fact=fact*i;
  }
printf("Factorial of %d is %d",n,fact);
return 0;
}
