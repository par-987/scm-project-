#include<stdio.h>
void main()
{
int n,rem,rev=0;
printf("enter the number:");
scanf("%d",&n);
do
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
while(n>0);
{
printf("reverse of a number =%d",rev);
}
}
