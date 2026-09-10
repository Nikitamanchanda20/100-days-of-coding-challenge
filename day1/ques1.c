// write a program to input two numbers and display their sum.

#include <stdio.h>

   int main()
{
int a;
int b;
int c;

printf("Enter first number :");
scanf("%d" ,&a);
printf("Enter the second number :");
scanf("%d" ,&b);
c=a+b;
printf("sum of %d and %d is %d:" ,a,b,c);
return 0;
}
