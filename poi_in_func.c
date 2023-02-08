//POINTERS IN FUNCTIONS
//SWAPPING
#include<stdio.h>
void swap(int *x,int *y);
void main()
{
int a,b;
printf("\n Enter the values of a and b=");
scanf("%d%d",&a,&b);
printf("\nBEFORE CALLING:a=%d,b=%d",a,b);
swap(a,b);      //function calling
printf("\nAFTER CALLING:a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
int k;
k=x;
x=y;
y=k;
}
