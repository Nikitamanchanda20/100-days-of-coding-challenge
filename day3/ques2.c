// write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter two nums:");
scanf("%d %d" ,&a,&b);

c=a;
a=b;
b=c;
printf("the swaped nums are %d %d" ,a,b);
return 0;
}
