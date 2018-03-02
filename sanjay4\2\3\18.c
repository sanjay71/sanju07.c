#include<stdio.h>
int main(void)
{
int a,b,temp;
clrscr();
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
return 0;
getch();
}
