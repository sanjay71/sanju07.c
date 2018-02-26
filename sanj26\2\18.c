#include <stdio.h>
int main(void) {
char n;
printf("enter the string:",n);
scanf("%s",&n);
if(n>=65&&n<=90||n>=97&&n<=122)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}
