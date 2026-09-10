//Write a program to calculate simple ans compound interse for given proncipal rate,and time.
#include <stdio.h>
#include <math.h>
int main()

{
float P,R,T,SI,CI,Amount;
printf("Enter Principal");
scanf("%f",&P);
printf("Enter Rate");
scanf("%f",&R);
printf("Enter Time");
scanf("%f",&T);

//Simple Interest
SI=(P*R*T)/100;

//Compound Interest
Amount=P*pow(1+R/100,T);
CI=Amount-P;
printf("Simple Interest=%2f\n",SI);
printf("Compound Interest=%2f\n",CI);
return 0;
}
