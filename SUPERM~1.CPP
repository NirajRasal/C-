#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
//global variable declaration
int k=7,r=0,flag=0;
//float tax=12;
struct datea
{
    int mm,dd,yy;
};

ofstream fout;
ifstream fin;

class item
{
    int itemno;
    char name[25];
    datea a;
public:
    void add()
    {
	cout<<"\n\n\tItem No: ";
	cin>>itemno;
	cout<<"\n\n\tName of the item: ";
	cin>>name;
	//gets(name);
	cout<<"\n\n\tManufacturing Date(dd-mm-yy): ";
	cin>>a.mm>>a.dd>>a.yy;
    }
    void show()
    {
	cout<<"\n\tItem No: ";
	cout<<itemno;
	cout<<"\n\n\tName of the item: ";
	cout<<name;
	cout<<"\n\n\tDate : ";
	cout<<a.mm<<"-"<<a.dd<<"-"<<a.yy;
    }
    void report()
    {
	gotoxy(3,k);
	cout<<itemno;
	gotoxy(13,k);
	puts(name);
    }
    int retno()
    {
	return(itemno);

    }

};

class amount: public item
{
    float price,qty,gross,netamt,dis,tax;
public:
    void add();
    void show();
    void report();
    void calculate();
    void pay();
    float retnetamt()
    {
	return(netamt);
    }
}amt;

void amount::add()
{
    item::add();
    cout<<"\n\n\tPrice: ";
    cin>>price;
    cout<<"\n\n\tQuantity: ";
    cin>>qty;
    cout<<"\n\n\tDiscount percent: ";
    cin>>dis;
    cout<<"\n\n\t tax percent:";
    cin>>tax;
    calculate();
    fout.write((char *)&amt,sizeof(amt));
    fout.close();
}
void amount::calculate()
{
    gross=price+(price*(tax/100));
    netamt=qty*(gross-(gross*(dis/100)));
}
void amount::show()
{
    fin.open("itemstore.dat",ios::binary);
    fin.read((char*)&amt,sizeof(amt));
    item::show();
    cout<<"\n\n\tNet amount: ";
    cout<<netamt;
    fin.close();
}

void amount::report()
{
    item::report();
    gotoxy(23,k);
    cout<<price;
    gotoxy(33,k);
    cout<<qty;
    gotoxy(44,k);
    cout<<tax;
    gotoxy(52,k);
    cout<<dis;
    gotoxy(64,k);
    cout<<netamt;
    k=k+1;
    if(k==50)
    {
	gotoxy(25,50);
	cout<<"PRESS ANY KEY TO CONTINUE...";
	getch();
	k=7;
	system("cls");
	gotoxy(30,3);
	cout<<" ITEM DETAILS ";
	gotoxy(3,5);
	cout<<"NUMBER";
	gotoxy(13,5);
	cout<<"NAME";
	gotoxy(23,5);
	cout<<"PRICE";
	gotoxy(33,5);
	cout<<"QUANTITY";
	gotoxy(44,5);
	cout<<"TAX";
	gotoxy(52,5);
	cout<<"DEDUCTION";
	gotoxy(64,5);
	cout<<"NET AMOUNT";
    }
}

void amount::pay()
{
    show();
    cout<<"\n\n\n\t\t*************************";
    cout<<"\n\t\t          DETAILS          ";
    cout<<"\n\t\t*****************************";
    cout<<"\n\n\t\tPRICE                  :"<<price;
    cout<<"\n\n\t\tQUANTITY               :"<<qty;
    cout<<"\n\t\tTAX PERCENTAGE           :"<<tax;
    cout<<"\n\t\tDISCOUNT PERCENTAG       :"<<dis;
    cout<<"\n\n\n\t\tNET AMOUNT           :Rs."<<netamt;
    cout<<"\n\t\t*****************************";
}

void main()
{
int l,m,i;
int g=DETECT,da;
initgraph(&g,&da,"C:\\TC\\BGI");
cleardevice();
l=getmaxx()/2;
m=getmaxx()/2;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
setbkcolor(rand());
setcolor(4);
int c=150;
for(int e=0;e<5;e++)
{
for(i=50;i<100;i++)
{
setcolor(3);
settextstyle(SMALL_FONT,HORIZ_DIR,10);
outtextxy(l,m-60,"LOADING...");
circle(l,m-60,i);
c--;
cleardevice();
}
}
setcolor(9);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
settextjustify(l,m);
outtextxy(l-90,m-130,"WELCOME");
delay(170);
outtextxy(l-90,m-90,"TO");
delay(170);
outtextxy(l-10,m-90,"THE");
delay(170);
outtextxy(l-90,m-50,"SUPERMARKET");
delay(150);
cleardevice();
setcolor(RED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
settextjustify(l,m);
outtextxy(l-90,m-170,"THIS PROJECT");
delay(500);
outtextxy(l-90,m-140,"IS MADE BY");
delay(500);
outtextxy(l-90,m-110,"NIRAJ RASAL AND");
delay(500);
outtextxy(l-90,m-80,"VISHAL PATIL");
delay(350);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout<<setprecision(2);
    fstream tmp("temp.dat",ios::binary|ios::out);
menu:
    system("cls");
    gotoxy(25,2);
    cout<<"Super Market Billing ";
    gotoxy(25,3);
    cout<<"===========================\n\n";
    cout<<"\n\t\t1.Bill Report\n\n";
    cout<<"\t\t2.Add/Remove/Edit Item\n\n";
    cout<<"\t\t3.Show Item Details\n\n";
    cout<<"\t\t4.Exit\n\n";
    cout<<"\t\tPlease Enter Required Option: ";
    int ch,ff;
    float gtotal;
    cin>>ch;
    switch(ch)
    {
    case 1:
ss:
	system("cls");
	gotoxy(25,2);
	cout<<"Bill Details";
	gotoxy(25,3);
	cout<<"================\n\n";
	cout<<"\n\t\t1.All Items\n\n";
	cout<<"\t\t2.Back to Main menu\n\n";
	cout<<"\t\tPlease Enter Required Option: ";
	int cho;
	cin>>cho;
	if(cho==1)
	{
	    system("cls");
	    gotoxy(30,3);
	    cout<<" BILL DETAILS ";
	    gotoxy(3,5);
	    cout<<"ITEM NO";
	    gotoxy(13,5);
	    cout<<"NAME";
	    gotoxy(23,5);
	    cout<<"PRICE";
	    gotoxy(33,5);
	    cout<<"QUANTITY";
	    gotoxy(44,5);
	    cout<<"TAX %";
	    gotoxy(52,5);
	    cout<<"DISCOUNT %";
	    gotoxy(64,5);
	    cout<<"NET AMOUNT";
	    fin.open("itemstore.dat",ios::binary);
	    if(!fin)
	    {
		cout<<"\n\nFile Not Found...";
		goto menu;
	    }
	    fin.seekg(0);
	    gtotal=0;
	    while(!fin.eof())
	    {
		fin.read((char*)&amt,sizeof(amt));
		if(!fin.eof())
		{
		    amt.report();
		    gtotal+=amt.retnetamt();
		    ff=0;
		}
		if(ff!=0) gtotal=0;
	    }
	    gotoxy(17,k);
	    cout<<"\n\n\n\t\t\tGrand Total="<<gtotal;
	    getch();
	    fin.close();
	}
	if(cho==2)
	{
	    goto menu;
	}
	goto ss;
    case 2:
db:
	system("cls");
	gotoxy(25,2);
	cout<<"Bill Editor";
	gotoxy(25,3);
	cout<<"=================\n\n";
	cout<<"\n\t\t1.Add Item Details\n\n";
	cout<<"\t\t2.Edit Item Details\n\n";
	cout<<"\t\t3.Delete Item Details\n\n";
	cout<<"\t\t4.Back to Main Menu ";
	int apc;
	cin>>apc;
	switch(apc)
	{
	case 1:
	    fout.open("itemstore.dat",ios::binary|ios::app);
	    amt.add();
	    cout<<"\n\t\tItem Added Successfully!";
	    getch();
	    goto db;

	case 2:
	    int ino;
	    flag=0;
	    cout<<"\n\n\tEnter Item Number to be Edited :";
	    cin>>ino;
	    fin.open("itemstore.dat",ios::binary);
	    fout.open("itemstore.dat",ios::binary|ios::app);
	    if(!fin)
	    {
		cout<<"\n\nFile Not Found...";
		goto menu;
	    }
	    fin.seekg(0);
	    r=0;
	    while(!fin.eof())
	    {
		fin.read((char*)&amt,sizeof(amt));
		if(!fin.eof())
		{
		    int x=amt.item::retno();
		    if(x==ino)
		    {
			flag=1;
			fout.seekp(r*sizeof(amt));
			system("cls");
			cout<<"\n\t\tCurrent Details are\n";
			amt.show();
			cout<<"\n\n\t\tEnter New Details\n";
			amt.add();
			cout<<"\n\t\tItem Details editted";
		    }
		}
		r++;
	    }
	    if(flag==0)
	    {
		cout<<"\n\t\tItem No does not exist...Please Retry!";
		getch();
		goto db;
	    }
	    fin.close();
	    getch();
	    goto db;

	case 3:
	    flag=0;
	    cout<<"\n\n\tEnter Item Number to be deleted :";
	    cin>>ino;
	    fin.open("itemstore.dat",ios::binary);
	    if(!fin)
	    {
		cout<<"\n\nFile Not Found...";
		goto menu;
	    }
	    fin.seekg(0);
	    while(fin.read((char*)&amt, sizeof(amt)))
	    {
		int x=amt.item::retno();
		if(x!=ino)
		    tmp.write((char*)&amt,sizeof(amt));
		else
		{
		    flag=1;
		}
	    }
	    fin.close();
	    tmp.close();
	    fout.open("itemstore.dat",ios::trunc|ios::binary);
	    fout.seekp(0);
	    tmp.open("temp.dat",ios::binary|ios::in);
	    if(!tmp)
	    {
		cout<<"Error in File";
		goto db;
	    }
	    while(tmp.read((char*)&amt,sizeof(amt)))
		fout.write((char*)&amt,sizeof(amt));
	    tmp.close();
	    fout.close();
	    if(flag==1)
		cout<<"\n\t\tItem Succesfully Deleted";
	    else if (flag==0)
		cout<<"\n\t\tItem does not Exist! Please Retry";
	    getch();
	    goto db;
	case 4:
	    goto menu;
	default:
	    cout<<"\n\n\t\tWrong Choice!!! Retry";
	    getch();
	    goto db;
	}
    case 3:
	system("cls");
	flag=0;
	int ino;
	cout<<"\n\n\t\tEnter Item Number :";
	cin>>ino;
	fin.open("itemstore.dat",ios::binary);
	if(!fin)
	{
	    cout<<"\n\nFile Not Found...\nProgram Terminated!";
	    goto menu;
	}
	fin.seekg(0);
	while(fin.read((char*)&amt,sizeof(amt)))
	{
	    int x=amt.item::retno();
	    if(x==ino)
	    {
		amt.pay();
		flag=1;
		break;
	    }
	}
	if(flag==0)
	    cout<<"\n\t\tItem does not exist....Please Retry!";
	getch();
	fin.close();
	goto menu;
    case 4:
	system("cls");
	gotoxy(20,20);
	cout<<"ARE YOU SURE, YOU WANT TO EXIT (Y/N)?";
	char yn;
	cin>>yn;
	if((yn=='Y')||(yn=='y'))
	{
	    //gotoxy(12,20);
	    //system("cls");
	    //cout<<"************************** THANKS **************************************";
	    getch();
	    exit(0);
	}
	else if((yn=='N')||(yn=='n'))
	    goto menu;
	else
	{
	    goto menu;
	}
    default:
	cout<<"\n\n\t\tWrong Choice....Please Retry!";
	getch();
	goto menu;
    }
}
