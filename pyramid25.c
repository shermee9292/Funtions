//TO PRINT PATTERNS AND PYRAMIDS
#include<stdio.h>
void main()
{
int i,j,n;
printf("\n Enter the value of number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf(" #");
}
printf("\n");
}
}
