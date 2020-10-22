 #include<iostream.h>
 #include<conio.h>
 #include<string.h>
 //#include<exception>
 void main()
 {
 int x;
 int y,z;
 clrscr();
 cout<<"enter the value of x";
 cin>>x;
 cout<<"enter the value of y";
 cin>>y;
 z=(x/y);
 try
 {
 if(y==0)
 {
 throw y;
 //cout<<"demonitior cannot be zero";
 }
 else if(x<0)
 {
 throw"negative number not allowed";
 }
 z=x/y;
 cout<<"division is"<<z;
 }
 catch(int num)
 {
 cout<<"negative numbers not allowed";
 }
 catch(char* message)
 {
 cout<<message;
 }
 getch();
 }