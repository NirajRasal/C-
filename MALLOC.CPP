/*#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *ptr;
int i,y,z;
clrscr();
ptr=(int *)malloc(1);
for(i=0;i<2;i++)
{
printf("enteer number %d",i+1);
scanf("%d",(ptr+i));
}
for(i=0;i<2;i++)
{
printf("\n the numbers are %d",*(ptr+i));
y=(*ptr)*(*ptr);
z=*(ptr+i)**(ptr+i);
}
printf("\nthe square root of number is %d ",y);
printf("\n square root of number two is %d",z);
getch();
}*/


#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *ptr;
int i,y;
clrscr();
ptr=(int *)malloc(1);
for(i=0;i<3;i++)
{
printf("enteer three number %d",i+1);
scanf("%d",(ptr+i));
}
for(i=0;i<3;i++)
{
if(*ptr<*(ptr+i))
*ptr=*(ptr+i);
}
printf("the largest number is %d",*ptr);
getch();
}
