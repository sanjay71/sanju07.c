include<stdio.h>
void main()
{
int a,b,n;
clrscr();
printf("enter 2 number");
scanf("%d%d",&a,&b);
n=a*b;
if(n%2==0)
{
printf("product is even");
}
else
{
printf("product is odd");
}
getch();
}
