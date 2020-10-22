#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int choice,day,amount;
float total;
clrscr();
cout<<"enter amount"<<endl;
cin>>amount;
do
{
cout<<"1.Sunday(20%)"<<endl;
cout<<"2.Monday(30%)"<<endl;
cout<<"3.Thusday(35%)"<<endl;
cout<<"4.Wenesday(50%)"<<endl;
cout<<"5.Thursday(40%)"<<endl;
cout<<"6.Friday(25%)"<<endl;
cout<<"7.Saturday(20%)"<<endl;
cout<<"8.Exit"<<endl;
cout<<"\t\t Enter today's day"<<endl;
cin>>choice;
switch(choice)
{
case 1:
total=(amount/100)*80;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 2:
total=(amount/100)*80;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 3:
total=(amount/100)*80;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 4:
total=(amount/100)*70;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 5:
total=(amount/100)*65;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 6:
total=(amount/100)*50;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
case 7:
total=(amount/100)*60;
cout<<"\n\tthe total amount after discount is"<<total<<endl;
break;
}
}
while(choice!=8);
cout<<"\n\n\t\t**********THANK YOU************";
getch();
}












