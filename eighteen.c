#include<stdio.h>
int main()
{
int a,b,t;
printf("type in two nos a and b\n");
scanf("%d %d", &a, &b);
printf("The original read numbers are a=%d and b=%d\n",a,b);
t=a;
a=b;
b=t;
printf("the swapped two nos are a= %d and b= %d\n",a,b);
}

