#include<iostream.h>
#include<conio.h>
int x=79;
class test
{
int count;
public:
void getdata(int x)
{
count=x;
}
void operator +()
{
count=count+2;
}
void display()
{
cout<<"count:"<<count<<"\n";
cout<<"x="<<x;
}
};
void main()
{
test t;
t.getdata(10);
+t;
t.display();
getch();
}