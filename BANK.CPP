#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class bank
{
char depositor_name[10];
int account_no;                             //bank program of ut1//
char type[10];
long float balanced;
public:
void getdata();
void deposite();
void withdrawl();
void display()
{
cout<<"\nyour name is:"<<depositor_name<<endl<<setw(10);
cout<<"\nand your balance is:"<<balanced<<endl<<setw(10);
}
}b1;
void bank::getdata()
{
cout<<"enter your name please"<<endl;
cin>>depositor_name;
cout<<"please enter your account no"<<endl;
cin>>account_no;
cout<<"please enter type of account"<<endl;
cin>>type;
cout<<"please enter balance in account"<<endl;
cin>>balanced;
}
void bank::deposite()
{
int d;
cout<<"enter the amount you want to deposite"<<endl;
cin>>d;
balanced=balanced+d;
cout<<"\ntotal balanced in tour account is"<<balanced<<endl;
}
void bank::withdrawl()
{
int w;
cout<<"enter the amount you want to withdrawl"<<endl;
cin>>w;
balanced=balanced-w;
cout<<"\ntotal balanced in tour account is"<<balanced<<endl;
}
void main()
{
clrscr();
//bank b1;//
b1.getdata();
b1.deposite();
b1.withdrawl();
b1.display();
getch();
}