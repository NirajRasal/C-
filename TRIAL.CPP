#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
char name[10];
int age;
int salary;
clrscr();
ofstream fout("abc.txt",ios::out);
cout<<"enter the name"<<endl;
cin>>name;
fout<<name;
cout<<"enter the age"<<endl;
cin>>age;
fout<<age;
cout<<"enter the salary"<<endl;
cin>>salary;
fout<<salary;
fout.close();
ifstream fin("abc.txt", ios::in);
/*const int n=80;
char line[n];
while(fin)
{
fin.getline(line,n);
cout<<line;
}*/
fin>>name;
fin>>age;
fin>>salary;
cout<<"name \n"<<name;
cout<<"age \n\n"<<age;
cout<<"salary\n\n "<<salary;
fin.close();
getch();
}
