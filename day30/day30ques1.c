// count even and odd numbers in  array.
#include <stdio.h>
int main()
{
int n,a[5],even=0,i,odd=0;
printf("Enter no of elements");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d" ,&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]%2==0)
  {
    even++;
  }
else
 {
 odd++;
 }
}
printf("Even no=%d \n",even);
printf("Odd no=%d \n",odd);
return 0;
}
