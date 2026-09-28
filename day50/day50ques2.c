//Print all sub-strings of a string.
#include <stdio.h>
int main()
{
char str[50];
printf("Enter string:");
scanf("%s",str);
int i,j,k;
for(i=0;str[i]!=0;i++)
  {
for(j=i;str[j]!=0;j++)
    {
for(k=i;k<=j;k++)
      {
printf("%c",str[k]);
      }
printf("\n");
    }
  }
return 0;
}
