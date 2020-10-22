/*#include<iostream.h>
#include<conio.h>
int maxx(int &,int &);
class max
{
public:
int a,b;
public:
void get()
{
cout<<"enter the value of a and b"<<endl;
cin>>a;
cin>>b;
}
int maxx(int &a,int &b)
{
if(a>b)
return a;
else
return b;                              //not running program//
}
};
int main()
{
int v,;
max m1;
clrscr();
m1.get();
m1.maxx(&a,&b);
return 0;
}*/


#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y);
int main()
{
int a=5,b=10;
clrscr();
cout<<"brfore swapping a="<<a<<" b="<<b;
swap(a,b);
cout<<"brfore swapping a="<<a<<" b="<<b;
return 0;
}
void swap(int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;
getch();
return;
}
