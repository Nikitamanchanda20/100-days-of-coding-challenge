// Count positive,negative,and zero elememts in an arrray.
#include <stdio.h>
int main()
{
int i,n,a[5],positive=0,negative=0,zero=0;
printf("Enter no of elements:");
scanf("%d",&n);
printf("Enter elements: \n");
for(i=0;i<n;i++)
{
 scanf("%d" ,&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]>0)
{
 positive++;
}
else if(a[i]<0)
{
negative++;
}
else
{
  zero++;
}
}
printf("Positive nos are: %d\n",positive);
printf("Negative nos are: %d\n",negative);
printf("No of zero are: %d\n",zero);
return 0;
}
