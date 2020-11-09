//address calculation for two dimensional array(row major)
#include<stdio.h>
 #include<conio.h>
 void main()
 {
  int a[2][3],*ba,w,i,j,lr,lc,r,c,loc;
  clrscr();
  ba=a[0];
  w=sizeof(int);
  printf("\nEnter array element row and column indexwhose address to be found:");
  scanf("%d%d",&i,&j);
  r=2;
  c=3;
  lr=lc=0;
  loc=(*ba)+w*(c*(i-lr)+(j-lc));
  printf("\nBase address is %d",*ba);
  printf("\nLocation of %d row and %d column element is %d",i,j,loc);
  }