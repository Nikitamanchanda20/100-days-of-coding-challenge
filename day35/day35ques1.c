// Find the second largest number in an array.
#include <stdio.h>
int main()
{
int i,a[5],largest,second;
printf("Enter no of elements");
for(i=0;i<5;i++)
  scanf("%d",&a[i]);
largest=a[0];
second=a[0];
for(i=1;i<5;i++)
   {
     if (a[i]>largest)
      {
        second=largest;
        largest=a[i];
       }
       else if (a[i]>second && a[i] !=largest)
          {
            second=a[i];
           }
    }
printf("second largest = %d",second);
return 0;
}
