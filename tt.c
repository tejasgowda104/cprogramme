#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,sum,per;
printf("enter the value for 5 subjects");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=(s1+s2+s3+s4+s5);
per=(sum*100)/500;
if(per>=90)
{
printf("grades=s");
}
else if (per>=80 && per<=89)
{
printf("grade=a");
}
else if (per>=70 && per<=79)
{
printf("grade=b");
}
else if (per>=60 && per<=69)
{
printf("grade=c");
}
else
{
printf("grade=fail");
}
}
