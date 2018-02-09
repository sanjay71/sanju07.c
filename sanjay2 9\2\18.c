include<stdio.h>
void main()
{
int a,b,i;
clrscr();
printf("ENTER THE RANGE:\n");
scanf("%d%d",&mia,&b);
printf("TO PRINT THE EVEN NO'S BETWEEN THE RANGE:\n");
for(i=a;i<b;i++)
{
if((i%2)==0)
{
printf("%d\n",i);
}
getch();
return 0;
}
