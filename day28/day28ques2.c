// Read and print elements of a one-dimensional array.

#include <stdio.h>
int main()
{
int a[10],i,n;
 printf("Enter number of elements:");
scanf("%d",&n);

printf("Enter elements:\n");
 
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
printf("Elements are;\n");
 for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
