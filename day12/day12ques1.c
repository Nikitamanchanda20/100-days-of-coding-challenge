// Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.
#include <stdio.h>

int main()
{
    int i, fine;
printf("Enter no of days");
scanf("%d",&i);
if(i<=5)
{
fine=2*i;
printf("Fine is:- Rs %d",fine);
}
else if(i>5 && i<=10)
{
fine=10+(i-5)*4;
printf("Fine is:- Rs %d",fine);
}
else if(i>10 && i<=30)
{
fine=30+(i-10)*6;
printf("Fine is:- Rs %d",fine);
}
else
{
printf("Membership cancelled");
}
return 0;
}



