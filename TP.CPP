#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()			 //program to convert $ to rs and vica-versa
{
float rs;
float dollar;
int choice;
float value=67.86;
clrscr();
cout<<"\t\t\ntoday's 1 dollar="<<value<<endl<<endl;
cout<<"1.convert Rs to dollar($)"<<endl;
cout<<"2.convert dollar($) to RS"<<endl;
cout<<"3.exit program"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the Rs"<<endl;
cin>>rs;
float result=rs/67.86;
cout<<"dollar="<<result<<endl;
cout<<"\t\n\n press any key to exit"<<endl;
break;

case 2:
cout<<"enter the dollar($)"<<endl;
cin>>dollar;
float resul=dollar*67.86;
cout<<"Rs="<<resul<<endl;
cout<<"\t\n\n press any key to exit"<<endl;
break;

case 3:
exit(0);
break;
}
getch();
}

