#include<iostream.h>
#include<conio.h>
#include<process.h>
class baseclass
{
public:
  baseclass()                             //constructor//
{
cout<<"object created";		  //for timepass//
}
  ~baseclass()                             //destructor//
{
cout<<"object destroyed"<<endl;
}
};
void main()
{
clrscr();
baseclass b1;                   //object are created//
baseclass b2;         //Also destroyed check using alt+f5//
getch();
}