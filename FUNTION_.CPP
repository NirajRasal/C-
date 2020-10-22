#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &x,T &y)
{
T temp=x;
x=y;
y=temp;
}
void fun(int m,int n,float a,float b)
{
cout<<"m and n before swap:"<<m<<endl<<n<<endl;
swap(m,n);
cout<<"m and n after sap"<<m<<endl<<n<<endl;

cout<<"a and b before swap:"<<a<<endl<<b<<endl;
swap(a,b);
cout<<"a and b after swap"<<a<<endl<<b<<endl;
}
void main()
{
clrscr();
fun(10,20,13.24,56.13);
getch();
}
