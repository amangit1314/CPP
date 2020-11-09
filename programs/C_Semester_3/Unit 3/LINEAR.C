//program for linear search
#include<stdio.h>
#include<conio.h>
void linear(int a[],int n,int t);
void main()
{
 int a[20],n,t,i;
 clrscr();
 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Ente nos:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\nEnter number to search:");
 scanf("%d",&t);
 linear(a,n,t);
 getch();
}
//function for linear search
void linear(int a[],int n,int t)
{
 int i;
 for(i=0;i<n;i++)
  {
   if(a[i]==t)
    {
     printf("\nSearch successful and number found at %d position",i+1);
     break;
    }
   }
  if(i==n)
   printf("\nSearch unsuccessful");
}

