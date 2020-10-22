/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
 for(j=1;j<=3;j++)
 {
 printf("\t*");
 }
 printf("\n\n");
 }
 getch();
 }*/



 #include<stdio.h>
 #include<conio.h>
 #define PI 3.14
 void main()
 {
 int r;
 int circumference,area;

 printf("\nemter the value of r");
 scanf("%d",&r);
 circumference=PI*r*r;
 area=2*PI*r;
 printf("cir=%d,area=%d",circumference,area);
 getch();
 }