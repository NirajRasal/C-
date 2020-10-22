#include<fstream.h>f
#include<iostream.h>
#include<conio.h>
void main()
{
char data[100];
clrscr();
ofstream fout;
{
fout.open("text.txt");
cout<<"writing to the file"<<endl;
cout<<"enter your name;";
cin>>data;
fout<<data<<endl;
cout<<"enter your age;";
cin>>data;
//cin.ignore();
fout<<data<<endl;
fout.close();
}
ifstream fin;
{
fin.open("text.txt");
cout<<"reading from the file"<<endl;
fin>>data;
cout<<data<<endl;
fin>>data;
cout<<data<<endl;
fin.close();
}
getch();
}