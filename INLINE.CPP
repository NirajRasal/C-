#include<iostream.h>
#include<conio.h>
inline float mul(float a,float b)
{
cout<<"addition is "<<a+b<<"\n multiplication is:"<<endl;
return(a*b*a*b*b*a);

}
void main()
{
float a=12.4,b=15.2;
clrscr();
cout<<" "<<endl;
cout<<mul(a,b)<<endl;
getch();
}