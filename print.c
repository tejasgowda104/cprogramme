#include <stdio.h>

void main()
{
int i,j,l,n=1;
printf("Enter the number of lines:");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",n);
n++;
}
printf("\n");
}
}


