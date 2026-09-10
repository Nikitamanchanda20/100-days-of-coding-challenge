//Search for an element in an array using linear search
#include <stdio.h>
int main()
{
int i,even=0,odd=0,n,a[5];
printf("Enter no of elements:");
scanf("%d" ,&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
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
printf("Even nos=%d \n",even);
printf("Odd nos%d \n",odd);
return 0;
}
