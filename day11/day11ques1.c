//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
int i;
printf("Enter month number(1-12):");
scanf("%d",&i);
  
switch(i)
{
case 1:
 {
if (i==1)
    printf("January-31 days");
   break;
  }
case 2:
  {
if (i==2)
    printf("February-28 days");
   break;
  }
case 3:
  {
if (i==3)
    printf("March-31 days");
   break;
  }
case 4:
 {
if (i==4)
   printf("April-30 days");
  break;
 }
case 5:
 {
if (i==5)
    printf("May-31 days");
   break;
 }
case 6:
 {
if (i==6)
    printf("June-30 days");
   break;
 }
case 7:
 {
if (i==7)
    printf("July-31 days");
   break;
 }
case 8:
 {
if (i==8)
    printf("August-31 days");
   break;
 }
case 9:
 {
if (i==9)
    printf("September-30 days");
   break;
 }
case 10:
{
if (i==10)
    printf("October-31 days");
   break;
 }
case 11:
 {
if (i==11)
    printf("November-30 days");
   break;
}
case 12:
 {
if (i==12)
    printf("December-31 days");
   break;
}
default:
 {
   printf("Invalid month number");
 }
}
return 0;
}
