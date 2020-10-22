 #include<iostream.h>
 #include<conio.h>
 class student
 {
 public:
   void set()
  {
  }
  void disp()
 {
 cout<<"\n the student is a good boy";
 }
 };

 class sport:public student
 {
 char *sportname;
 int score;
 public:
 void sett(char *b,int a)
 {
 sportname=b;
 score=a;
 }
 void disp1()
 {
 cout<<"\nthe sportname is"<<sportname;
 cout<<"\n the score is"<<score;
 }
 };
 void main()
 {
 sport m;
 clrscr();
 m.set();
 m.disp();
 m.sett("cricket",456);
 m.disp1();
 getch();
 }
