#include<iostream.h>
#include<conio.h>
#define pi 3.14
void area(int);
void area(int,int);
void area(float,int,int);

void area(int a)
{
cout<<"area of circle is:"<<pi*a*a<<endl;
}
void area(int a,int b)
{
cout<<"area of reactangle is"<<a*b<<endl;
}
void area(float a,int b,int c)
{
cout<<"area of triangle is "<<a*b*c<<endl;
}
void main()
{
clrscr();
area(7);
area(5,4);
area(0.5,4,6);
getch();
}