#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char data[200];
clrscr();
ofstream outf;
outf.open("xz.txt",ios::in);
cout<<"writing to file"<<endl;
cout<<"enter the name;"<<endl;
cin>>data;
outf<<data<<endl;
cout<<"enter the age"<<endl;
cin>>data;
outf<<data<<endl;
cout<<"enter the salary"<<endl;
cin>>data;
outf<<data;
outf.close();
ifstream fin;
fin.open("xz.txt",ios::out);
cout<<"reading from file"<<endl;
while(!fin.eof())
{
fin.getline(data,100);
cout<<data<<endl;
}
fin.close();
getch();
}