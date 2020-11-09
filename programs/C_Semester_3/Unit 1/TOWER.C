//program for Tower of Hanoi
#include<stdio.h>
#include<conio.h>
void tower(int,char,char,char);
void main()
{
 int n;
 char a='A',b='B',c='C';
 clrscr();
 printf("\nHow many disc:");
 scanf("%d",&n);
 tower(n,a,b,c);
 getch();
}
//function
void tower(int n,char a,char b,char c)
{
 if(n!=0)
  {
   tower(n-1,a,c,b);
   printf("\nMove disc from %c to %c",a,c);
   tower(n-1,b,a,c);
  }
 }

