#include<stdio.h>
int main()
{
char str[20];
int l,i,sum=0;
clrscr();
printf("Enter the string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
{
sum=sum+1;
}
}
printf("Special character:%d",sum);
return 0;
getch();
}
