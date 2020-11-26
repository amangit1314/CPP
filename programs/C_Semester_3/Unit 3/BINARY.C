 //program for binary search
#include<stdio.h>
#include<conio.h>
void binary(int a[],int n,int t);
void main()
{
 int a[20],n,t,i;
 clrscr();
 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Enter nos:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\nEnter number to search:");
 scanf("%d",&t);
 binary(a,n,t);
 getch();
}
//function for linear search
void binary(int a[],int n,int t)
{
 int f,m,l;
 f=0;
 l=n-1;
 while(f<=l)
  {
   m=(f+l)/2;
   if(a[m]==t)
    {
     printf("\nSearch successful and number found at %d position",m+1);
     break;
    }
   else
    if(a[m]>t)
     l=m-1;
    else
     f=m+1;
   }
  if(f>l)
   printf("\nSearch unsuccessful");
}
