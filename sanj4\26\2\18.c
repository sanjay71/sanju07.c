#include<stdio.h>
#include<conio.h>
void main()
{
int min[10],hr[70],ho=0,minr=0;
for(i=0;i<2;i++)
{
scanf("%d",&min);
scanf("%d",&hr);
}
for(i=0;i<2;i++)
{
minr+=min[i];
ho+=hr[i];
}
printf("%d:%d",minr,ho);
getch();
}
