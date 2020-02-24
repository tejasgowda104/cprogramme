#include<stdio.h>
void main()
{
char name[30];
int m1,m2,m3;
float average;
printf("enter the name");
scanf("%s", name);
printf("\n Hello my name is %s\n",name);
printf("enter marks for m1 m2 m3 \n");
scanf("%d%d%d", &m1,&m2,&m3);
average=(m1+m2+m3)/3;
printf("average=%f",average);
}

