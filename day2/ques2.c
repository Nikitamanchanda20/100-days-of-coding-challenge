// Write a program to calculate the area and circumfrence of a circle guven its radius.
#include <stdio.h>
int main()
{
float pie=3.14;
float radius,area,crf;
printf("Enter radius:");
scanf("%f" ,&radius);
area= pie*radius*radius;
crf= 2*pie*radius;
printf("Area=%f ,Circumference=%f" ,area,crf);
return 0;
}
