/*#include<iostream.h>
#include<conio.h>
void main()
{
float n,c=0;
int i;
clrscr();
cout<<"which table u want";
cin>>n;
cout<<"table of "<<n<<" is:";
for(i=n;i<=(n*10);i=i+n)
{
cout<<"\n"<<i;
c=c+i;
}
cout<<"\n addition is"<<c;
getch();
}*/

/*#include<iostream.h>
#include<conio.h>
 class swap
 {
 friend void swapp(void);
  int a,b;
  public:
  void getdata()
 {

  cout<<"enter the values of a and b";
  cin>>a>>b;
 }
 void display()
 {
 cout<<"the values are"<<a<<"\n"<<b<<endl;
 swapp();
 }
 }s2;
 void swapp()
 {
  s2.a=s2.a+s2.b;
  s2.b=s2.a-s2.b;
  s2.a=s2.a-s2.b;
  cout<<"after swaping the numbers are:"<<s2.a<<endl<<s2.b<<endl;

 }
void main()
{
clrscr();
//swap s2;
s2.getdata();
s2.display();
getch();
}*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
int swap(int &a,int &b);
int& max();
void main()
{
int a,b,c;
clrscr();
cout<<"enter the value of a and b";
cin>>a>>b;
cout<<"\nbefore swapping numbers are a="<<a<<"\n b="<<b;
/*if(a>b)
cout<<"max is 1st num"<<a<<endl;
else
cout<< "max is 2nd num"<<b<<endl;*/
swap(a,b);
}
int swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
cout<<"\n after swapping value of a="<<a<<"\n value of b="<<b;
getch();
return(0);
}
/*int& max( int &x,int &y)
{
if(x>y)
return x;
else
return y;
}*/










