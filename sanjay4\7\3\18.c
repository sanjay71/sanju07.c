#include <stdio.h>
int main(void)
{
char a[10];
clrscr();
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
count=count+1;
}
}
printf("%d",count);
return 0;
getch();
}
