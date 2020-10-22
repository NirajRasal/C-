#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class test
{
t1 a;
t2 b;
public:
test(t1 x,t2 y)
{
a=x;
b=y;
}
void show()
{
cout<<a<<b<<endl;
}
};
void main()
{
test<int,int>test1(21,35);
test<float,float>test2(23.56,23.56);
test1.show();
test2.show();
}