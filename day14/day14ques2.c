// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
int i,n,no,p=1;
printf("Enter n");
scanf("%d",&n);
for (i=1;i<=n;i++)
  {
no=2*i;
p=p*no;
  }
printf("Product of first %d even nos is:- %d" ,n,p);
return 0;
}

