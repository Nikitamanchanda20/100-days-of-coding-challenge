// find the sum of array elements.
#include <stdio.h>
int main()
{
int i,sum=0,a[5];
printf("Enter 5 elements:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum=%d",sum);
return 0;
}
