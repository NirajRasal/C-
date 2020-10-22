#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
clrscr();
cout<<"enter rows and columns of first matrix";
cin>>r1>>c1;
cout<<"enter rows and columns of second matrix";
cin>>r2>>c2;
cout<<"enter element of matrix 1\t";
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cout<<"enter element a \t"<<i+1<<j+1;
cin>>a[i][j];
}
}
cout<<"enter element of second matrix\t";
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
cout<<"enter element b \t"<<i+1<<j+1;
cin>>b[i][j];
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
mult[i][j]=0;
}
}
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
for(k=0;k<c1;k++)
{
mult[i][j]+=a[i][k]*b[k][j];
}
cout<<"output matrix\n";
for(i=0;i<r1;i++)
{
cout<<"\n";
for(j=0;j<c2;j++)
{
cout<<"\t"<<mult[i][j];
}
}
getch();
}