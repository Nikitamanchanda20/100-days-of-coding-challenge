//Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
char first[50],surname[50];
printf("Enter name:");
scanf("%s",first);
scanf("%s",surname);
printf("%c %s",first[0],surname);
return 0;
}
