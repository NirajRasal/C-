#include<iostream.h>
#include<conio.h>
#include<process.h>
class parent
{
public:
int id;
private:
int a;
};
class child:private parent
{
public:
int id_c;
};
int main()
{
child obj1;
//obj1.id=12;
obj1.id_c=16;
obj1.a=11;
cout<<"a is "<<obj1.a;
cout<<"cchild is"<<obj1.id_c<<endl;
//cout<<"parent is"<<obj1.id<<endl;
getch();
return 0;
}