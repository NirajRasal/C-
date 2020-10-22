	     //%% this program is made by coding master %%//
	     //%% don't u ever dare to change the code %%//
		      // NEVER EVER GIVE UP//
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
 /*if(xxx='y')
 {
 goto abc;
 }
 else
 {
 goto qwerty;
 }*/
 switch(xxx)
 {
 case 'y':
 cout<<"\n 1\n 5\n 7\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no";
 cin>>zzz;
 break;

 case 'n':
 cout<<"\n 2\n 4\n 6\n 8\n 10\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no\t";
 cin>>yyy;
 break;
 }
 switch(yyy)
 {
 case 'y':
 cout<<" 4\n 6\n 8\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no\t";
 cin>>vvv;
 break;

 case 'n':
 cout<<"\n\nthen ur number is 0\n";          // 0 is found//
 cout<<"\n\n\t\t\t wll played";
 break;
 exit(0);
 }
 switch(zzz)
 {
 case 'y':
 cout<<" 1\n 9\n 7\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no\t";
 cin>>ccc;
 if(ccc=='n')
 {
 cout<<"\n\n\t\t 5 is the number";
 cout<<"nice choice,well played";              // 5 is found//
 }
 if(ccc=='y')
 {
  cout<<"\n\n\t\t 7 is the number\n";
 cout<<"nice choice,well played"<<endl;         // 7 is found//
 }
 break;
 }
/* cout<<"\n 3\n 7\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no\t";
 cin>>bbb;
 break;
 }*/
 /*switch(ccc)
 {
 case 'y':
 cout<<" 3\n 1\n 5\n";
 cout<<"ur number is above?"<<endl;
 cout<<"press y for yes";
 cout<<"press n for no\t";
 cin>>nnn;
 }*/
 getch();
 }