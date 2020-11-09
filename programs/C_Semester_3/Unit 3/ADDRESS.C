//address calculation for one dimensional array
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int a[10],*ba,w,i,lb,loc;
  clrscr();
  ba=a;
  w=sizeof(int);
  printf("\nEnter array element whose address to be found:");
  scanf("%d",&i);
  lb=0;
  loc=(*ba)+w*(i-lb);
  printf("\nBase address is %d",*ba);
  printf("\nLocation of %d element is %d",i,loc);
  }


