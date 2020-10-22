#include<iostream.h>
#include<conio.h>
#include<time.h>
void main()
{
clrscr();
int i=2,x;
time_t noww=time(0);
char* dt=ctime(&noww);
gotoxy(53,25);
cout<<dt<<endl;
if(dt=saturday)
{
 x=10+i;
}
cout<<x<<endl;
getch();
}