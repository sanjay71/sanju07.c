include<stdio.h>
int main()
{
int a,b,c,i,sum=0;
clrscr();
scanf("%d %d %d",&a,&b,&c);
for(i=a;i>1;i--)
{
sum=sum+(a+(b-1)*c);
}
return 0;
}
