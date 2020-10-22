#include<iostream.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
cout<<"enter the value of a and b";
cin>>a>>b;
int x;
x=a-b;
try
{
if(x!=0)
{
cout<<"result(a/x)="<<a/x<<endl;
}
else
{
throw(x);
}
}
catch(int i)
{
cout<<"exception caught:x"<<x<<endl;
}
cout<<"end";
getch();
}