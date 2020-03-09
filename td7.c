#include<stdio.h>
void main()
{
int p,t;
float emi,r,x,y,z;
printf("enter the value of p,r,t");
scanf("%d%d%f",&p,&r,&t);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("z=%f",z);
printf("y=%f",y);
printf("x=%f",x);
printf("emi=%f",emi);
}
