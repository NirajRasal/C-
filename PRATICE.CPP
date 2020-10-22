
//the programs  wrote and successfully exicuted by
//  Niraj rasal just for pratice //

		   // area of rectangle//

/*#include<stdio.h>
#include<conio.h>
void main()
{
int length=5,breath=5,area;
clrscr();
area=length*breath;
printf("the area of rectangleis %d",area);
printf("\npress any key to exit");  //just for decoration//
printf("\n\n\t\t have a nice day");  //   -||-   //
getch();
}*/




//     area of square//
/*#include<iostream.h>
#include<conio.h>
void main()
{
int side,area;
clrscr();

cout<<"enter the valuue of side";
cin>>side;
area=side*side;
cout<<"\n the area of the square is "<<area;
getch();
}*/

 // area of rectangle  ///

/*#include<stdio.h>
#include<conio.h>


inline void area();             //    just change the cin and cout and  //
				  //   wruite in c and then write in cpp//

inline void square();
 void main()
{
int a;
int length,breath,height,area;
clrscr();
printf("\n area 1");
printf("/n square 2");
printf("\n what do you want to perform ?");
scanf("%d",&a);
switch(a)
{
case 1:
int length,breath,height,area;
printf("\n enter length");
scanf("%d",&length);
printf("\n enter the breath");
scanf("%d",&breath);
printf("\n enter the height");
scanf("%d",&height);
  area=length*breath*height;
printf("\n the area of rectangle is%d",area);
getch();

break;

case 2:

int no,square;
clrscr();
printf("\n entre the value of no");
scanf("%d",&no);
square=no*no;
printf("\n the square of the no is %d",square);

break;
}
getch();
}*/

/*
#include<iostream.h>
#include<conio.h>
void main()
{
int force,mass,accelaration;
clrscr();
cout<<"\nenter the mass";
cin>>mass;
cout<<"\n enter the accelaration";
cin>>accelaration;
force=mass*accelaration;
cout<<"the force is "<<force;
getch();
} */
/*#include<iostream.h>
#include<conio.h>
class employ
{
int id;
clrscr();
int sallery;
char *name;
char *companyname;
+
public:
employ()
{
id=7;
sallery=12000;
name="niraj";
companyname="owncompany";
}
employ(int no,int kl,char *n,char *cn)
{
id=no;
sallery=kl;
name=n;
companyname=cn;
}
void disp()
{
cout<<"\n id"<<id;
cout<<"\n sallery"<<sallery;
cout<<"\n name;"<<name;
cout<<"\n companyname"<<companyname;
}
};
void main()
{
employ m,m1(12,34,"nm","gh");
clrscr();
m.disp();
m1.disp();
getch();
} */


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,no;
clrscr();
cout<<"enter any num:";
cin>>no;
if(no==1)
{
cout<<"one is not a prime num,one cannot divisible by any num";
}
for(i=2;i<no;i++)
{
if(no%i==0)
{
cout<<"num is not prime";
break;
}
}
if(no==i)
{
cout<<"prime num";
}
getch();
}