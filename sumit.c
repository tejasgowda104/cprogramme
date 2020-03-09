/*sumit*/
#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,pere;
printf("enter s1,s2,s3,s4,s5,values\n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=(s1+s2+s3+s4+s5);
pere=sum*100/500;
if(pere>=90)
printf("grade=s\n");
else if(pere>80&&pere<=89)
printf("grade=a\n");
else if(pere>70&&pere<=79)
printf("grade=b\n");
else if(pere>60&&pere<=69)
printf("grade=c\n");
else
printf("grade=fail\n");
} 
