#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()

{
const int max=20;
char buffer[max];
clrscr();
ifstream infile("text.txt");
infile.getline(buffer,max);
cout<<buffer;
getch();
}