// insert an element in an array at a given position.
#include <stdio.h>
int main()
{
int position,n,i,x,a[5];
printf("Enter no of elements");
scanf("%d",&n);
printf("Enter elements in an array");
for(i=0;i<n;i++)

{
 scanf("%d",&a[i]);
}
printf("Enter element to be inserted");
scanf("%d",&x);
printf("Enter position");
scanf("%d",&position);

for(i=n;i>=position;i--)
 {
   a[i]=a[i-1];
 }
a[position-1]=x;
n++;
printf("Array after insertion");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
  }
return 0;
}
