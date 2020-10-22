#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char name[20];
//char fname[20];
long int age,salary;
ofstream fout;
clrscr();
//cout<<"enter the file name"<<endl;
//cin>>fname;
fout.open("ERROR3.txt",ios::out);
cout<<"enter the name of employee"<<endl;
cin>>name;
cout<<"enter the age"<<endl;
cin>>age;
cout<<"enter the salary"<<endl;
cin>>salary;
fout<<name<<age<<salary;
cout<<"record insertd in file successfully";
fout.close();
ifstream fin;
char infile[100];
fin.open("ERROR3.txt",ios::in | ios::binary);
fin.get(infile,100);
cout<<endl<<name<<endl;
cout<<endl<<age<<endl;
cout<<endl<<salary<<endl;
/*while(fin)
{
fin.get(infile);
cout<<infile;
}*/
//cout<<infile;
fin.close();
getch();
}