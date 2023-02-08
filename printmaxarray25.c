#include<stdio.h>
void main()
{
int i,a[10],s=0;
printf("\nEnter the array values=");
for(i=0;i<=10;i++)
scanf("%d",&a[i]);
printf("\nArray values are=");
 s=s+a[i];
for(i=0;i<=10;i++)
printf("\t%d",a[i]);
printf("\n THE SUM IS=%d",s);
}

