



	       //  class  program //

#include<iostream.h>
#include<conio.h>
class student
{
int rollno;
char *name;
public:
void set(int no,char *name)
{
rollno=no;
name=na;
}
void disp()
{
cout<<"\n roll no\t"<<rollno;
cout<<"\n name \t"<<name;
}
};
void main()
{
student m;
clrscr();
m.set(1,"niraj");
m.disp();
getch();
}




		       //inheritance	multiple       //


/*#include<iostream.h>
#include<conio.h>
class student
{
int rollno;
char *name;
public:
void set(int no,char *na)
{
rollno=no;
name=na;
}
void disp()
{
cout<<"\nrollno"<<rollno;
cout<<"\nname"<<name;
}
};
class employ
{
int idno;
char *name;
public:
void sett(int a,char *nm)
{
idno=a;
name=nm;
}
void disp1()
{
cout<<"\nidno"<<idno;
cout<<"\n name"<<name;
}
};
class book
{
int price;
int pageno;
public:
void setr(int b,int v)
{
price=b;
pageno=v;
}
void disp2()
{
cout<<"\nprice"<<price;
cout<<"\n page no"<<pageno;
}
};
class marks:public student,public employ,public book
{
int marks;
public:
void seta(int f)
{
marks=f;
}
void disp3()
{
cout<<"\nmarks"<<marks;
}
};
void main()
{
marks m;
clrscr();
m.set(1,"abc");
m.disp();
m.sett(23,"bn");
m.disp1();
m.setr(23,78);
m.disp2();
m.seta(12);
m.disp3();
getch();
} */


	       //	switch case      //


/*#include<stdio.h>
#include<conio.h>
void main()
{
 int x;
 int a,b;
 float c;
char ch;
clrscr();

printf("\n addition 1");
printf("\n subtraction 2");
printf("\n multiplication 3");
printf("\n division 4");
printf("\n what do you want to perform");
scanf("%d",&x);
printf("\n enter a and b");
scanf("%d%d",&a,&b);
switch (x)
{
case 1:
c=a+b;
printf("\n the addition is%f ",c);
break;
case 2:
c=a-b;
printf("\n the subtraction is%f ",c);
break;
case 3:
c=a*b;
printf("\n the multiplication is %f",c);
break;
case 4:
c=a/b;
printf("\n the division is%f ",c);
break;
}
getch();
} */

			   // padavali //

/*#include<iostream.h>
#include<conio.h>
void main()
{
int a=20,b=56,c=10,d=2,e=567,n;
clrscr();
n=a+b+c+(d*e);
cout<<"\n the value of n is "<<n;
getch();
} */



				//   finding size  //


/*#include<stdio.h>
#include<conio.h>
struct student
{
int g;

};
void main()
{
struct student a1;
printf("size of structure %d",sizeof (a1));
printf("\nenter the g");
scanf("%d",&a1.g);
printf("\n g:%d",a1.g);
getch();
}*/
		       //    virtual base class  //

/*#include<iostream.h>
#include<conio.h>
class student
{
  int rollno;
  char *name;
  public:
  void set(int r,char *n)
{
  rollno=r;
 name=n;
}
 void disp()
{
 cout<<"\nrollno"<<rollno;
 cout<<"\nname"<<name;
}
};
 class marks:virtual public student
{
  int sub1;
  int sub2;
  public:
  void setn(int s,int a)
{
 sub1=s;
 sub2=a;
}
 void disp1()
{
 cout<<"\n marks of sub1="<<sub1;
 cout<<"\n marks of sub2="<<sub2;
}
};
 class sport:virtual public student
{
  char *medalname;
  char *sportname;
  public:
 void sett(char *z,char *x)
{
 medalname=z;
 sportname=x;
}
 void disp2()
{
 cout<<"\nmedalname"<<medalname;
 cout<<"\nsportname"<<sportname;
}
};
 class result:public marks,public sport
{
  int sci;
  int math;
  public:
  void setr(int q,int w)
{
 sci=q;
 math=w;
}
 void disp3()
{
 cout<<"\nsci"<<sci;
 cout<<"\nmath"<<math;
}
};
 void main()
{
 result a;
 a.set(1,"niraj");
 a.disp();
 a.setn(23,56);
 a.disp1();
 a.sett("gold","running");
 a.disp2();
 a.setr(78,80);
 a.disp3();
 getch();
} */



/* #include<iostream.h>
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
 int wicket;
 public:
 void sett(char *b,int a,char c)
 {
 sportname=b;
 score=a;
 wicket=c;
 }
 void disp1()
 {
 cout<<"\nthe sportname is  "<<sportname;
 cout<<"\n the score is   "<<score;
 cout<<"\n wicket taken   "<<wicket;
 }
 };
 void main()
 {
 sport m;
 clrscr();
 m.set();
 m.disp();
 m.sett("cricket",456,4);
 m.disp1();
 getch();
 }*/                             //squart root of num//

/* #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int a,b;
 clrscr();
 printf(" enter the value of a");
 scanf("%d",&a);
 b=sqrt(a);
 printf("the squart root of the number is %d",b);
 getch();
 }*/



		  //power of num//

/* #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int a,b;
 clrscr();
 printf(" enter the value of a and b");
 scanf("%d %d",&a,&b);
 b=pow(a,b);
 printf("the power of the number is %d",b);
 getch();
 }*/                     //condition for weight and height of boys//

/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int count,i;
 clrscr();
 float weight,height;

 count=0;
 printf("enter the weight and height of 5 boys\n");

 for(i=0;i<=5;i++)
 {
   scanf("%f %f",&weight, &height);
   if(weight<50 && height >170)
   count=count+1;
 }
 printf("number of boys with weight<50 kg\n");
 printf("\n and height > 170 cm = %d",count);
 getch();
 }*/









