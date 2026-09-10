// Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main()
{
int i;
printf("Enter number");
scanf("%d",&i);
switch(i)
{
case 1:
  {
   if(i==1)
    printf("Monday");
   break;
   }
case 2:
   {
    if(i==2)
     printf("Tuesday");
    break;
   }
case 3:
   {
    if(i==3)
      printf("Wednesday");
     break;
   }
case 4:
   {
    if(i==4)
     printf("Thursday");
    break;
   }
case 5:
   {
    if(i==5)
      printf("Friday");
     break;
   }
case 6:
   {
     if(i==6)
       printf("Saturday");
      break;
    }
case 7:
   {
     if(i==7)
       printf("Sunday");
      break;
     }
default:
   {
     printf("Invalid day number");
   }
}
return 0;
}
