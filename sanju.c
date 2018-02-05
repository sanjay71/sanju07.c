#include<stdio.h>
#iclude<conio.h>
int main()
{
 int a;
  clrscr();
 printf("enter the year");
 scanf("%d",&a);
 if(a/4)
 {
 printf("year is a leap");
  }
 else
 {
 printf("year is not leap");
 }
 getch();
 return 0;
}
