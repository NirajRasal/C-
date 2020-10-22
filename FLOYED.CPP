/*#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,n=1;
clrscr();
for(i=1;i<5;i++)
{                                 //floyed's triangle//
for(j=1;j<=i;j++)
{
cout<<n<<" ";
n++;
}
cout<<endl;
}
getch();
}*/

#include<iostream.h>
#include<conio.h>
void main()
{
int row,c,temp,i,j;
clrscr();
temp=5;
//gotoxy(180,90);
for(row=1;row<=5;row++)
{
for(c=1;c<temp;c++)
cout<<" ";
temp--;
for(c=1;c<=2*row-1;c++)
cout<<"*";
cout<<endl;
}
getch();
}