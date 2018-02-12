#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,flag;
printf("enter the a and b:",a,b);
while(a<b)
{
int i,flag=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;break;
}
if(flag==0)
{
printf("%d",&a);
++a;
}
break;
