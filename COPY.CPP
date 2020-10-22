#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
 int count=0;
 class example                        //not running//
 {
 int a,b;
 public:
 example(int x,int y)          //parametarized constructor//
 {
 a=x;
 b=y;
 cout<<"normal constructor"<<endl;
 }
 example(example &obj)          //copy constructor with obj argunment//
 {
 count++;
 a=obj.a;
 b=obj.b;
 cout<<"in copy constructor"<<endl<<setw(20)<<endl;
 }
 ~example()          //copy constructor with obj argunment//
 {
 /*a=obj.a;
 b=obj.b;
 cout<<"in copy constructor"<<endl<<setw(20)<<endl;*/
 cout<<"number of object destroyed"<<count;
 count--;
 }

  void display()
 {
 cout<<"values are a= "<<a<<" b= "<<b<<endl;
 }
};
void main()
{
clrscr();
example o(10,20);          //parametarized constructor invoked//
example o1(o);              //copy construtor invoked - method 1//
example o3=o;                //copy construtor invoked - method 2//
o.display();
o1.display();
o3.display();
getch();
}