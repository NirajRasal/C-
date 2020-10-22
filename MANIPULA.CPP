

 #include<iomanip.h>
 #include<conio.h>
 #include<iostream.h>
 void main()
 {
 float f1=123.4566,f2=1.3452,f3=14.56;
 int i1=2345,i2=12,i3=4;
 char nm1[]="niraj",nm2[]="prakash",nm3[]="rasal";
 clrscr();

 cout<<f1<<endl<<f2<<endl<<f3<< endl<<endl;
 cout<<setw(15)<<setprecision(2)<<f1<<endl;
 cout<<setw(15)<<setprecision(2)<<f2<<endl;
 cout<<setw(15)<<setprecision(2)<<f3<<endl;

 cout<<setw(10)<<setiosflags(ios::right)<<i1<<endl;
 cout<<setw(10)<<setiosflags(ios::right)<<i2<<endl;
 cout<<setw(10)<<setiosflags(ios::right)<<i3<<endl;

 cout<<setw(6)<<setiosflags(ios::right)<<i1<<endl;
 cout<<setw(6)<<setiosflags(ios::right)<<i2<<endl;
 cout<<setw(6)<<setiosflags(ios::right)<<i3<<endl<<endl;

 cout<<setw(20)<<setfill('#')<<setiosflags(ios::left)<<nm1<<endl;
 cout<<setw(20)<<setiosflags(ios::left)<<nm2<<endl;
 cout<<setw(20)<<setiosflags(ios::left)<<nm3<<endl;

 cout<<setw(20)<<setfill('#')<<setiosflags(ios::internal)<<nm1<<endl;
 cout<<setw(20)<<setiosflags(ios::internal)<<nm2<<endl;
 cout<<setw(20)<<setiosflags(ios::internal)<<nm3<<endl;

 cout<<setw(20)<<setfill('#')<<setiosflags(ios::left)<<nm1<<endl;
 cout<<setw(20)<<setiosflags(ios::left)<<nm2<<endl;
 cout<<setw(20)<<setiosflags(ios::left)<<nm3<<endl;
 getch();
 }

