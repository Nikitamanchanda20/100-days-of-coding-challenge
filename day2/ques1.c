// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
int a,b,area,perimeter;
printf("The length:");
scanf("%d" ,&a);
printf("The breadth:");
scanf("%d" ,&b);
perimeter=2*(a=b);
area=a*b;
printf("The area is %d\n" ,area);
printf("The perimeter is %d\n" ,perimeter);
return 0;
}


