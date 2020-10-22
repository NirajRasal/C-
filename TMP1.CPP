#include<iostream.h>
#include<conio.h>
#include<process.h>
 void main()
 {
 int a,b;
 char xxx,yyy,zzz,vvv,ccc,bbb,nnn;
 clrscr();
 cout<<"choose a number between 0 to 10\n";
 cout<<" 1\n 3\n 5\n 7\n 9\n";
 cout<<"ur number is above?"<<endl;
 cout<<" press y for yes";
 cout<<" press n for no\t";
 cin>>xxx;
 switch(xxx)
 {
 case 'y':
 cout<<"\n 1\n 5\n 7\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no";
 cin>>zzz;
 if(zzz='n')
 {
 cout<<"hello";
 }

 case 'n':
 cout<<"\n 2\n 4\n 6\n 8\n 10\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cin>>ccc;
 cout<<"press n for no\t";
 cin>>zzz;
 break;
 }
 getch();
 }