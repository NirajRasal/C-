#include<iostream.h>
#include<conio.h>
class B
{                                           //inheritance//
int a;
public:
int b;
void get_ab();
int get_a();
void show_a();
};
class D: public B
{
int c;
public:
void mul();
void display();
};
void B::get_ab()
{
a=5;
}
int B::get_a()
{
return a;
}
void B::show_a()
{
cout<<"a="<<a<<endl;
}
void D::mul()
{
c=b*get_a();
}
void D:: display()
{
cout<<"a="<<get_a()<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
}
void main()
{
D d;
d.get_ab();
d.mul();
d.show_a();
d.display();
d.b=20;
d.mul();
d.display();
getch();
}

