#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int x,y,i;
int g=DETECT,d;
initgraph(&g,&d,"C:\\TC\\BGI");
cleardevice();
x=getmaxx()/2;
y=getmaxx()/2;
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
outtextxy(x,y-60,"LOADING...");
//settextstyle(SMALL_FONT,HORIZ_DIR,7);
//outtextxy(x+27,y+27,"please wait");
circle(x,y-60,i);
c--;
cleardevice();
}
}
setcolor(BLUE);
//settexttstyle(,CENTRAL_TEXT);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
settextjustify(x,y);
outtextxy(x-90,y-130,"***WELCOME***");
delay(170);
outtextxy(x-90,y-90,"TO");
delay(170);
outtextxy(x-10,y-90,"THE");
delay(170);
outtextxy(x-90,y-50,"**SUPERMARKET**");
getch();
closegraph();
}
