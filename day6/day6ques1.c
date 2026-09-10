// Write a program to input an integer and check whether its even or odd using if-else.
#include <stdio.h>
int main()
{
int num;
   printf("Enter an integer");
   scanf("%d",&num);

  if (num%2==0)
    printf("Even");
  else 
    printf("Odd");
return 0;
}
