//program for quick sort
#include<stdio.h>
#include<conio.h>
void quick(int a[],int,int);
int partition(int a[],int,int);
void main()
{
 int a[20],n,i;
 clrscr();
 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 quick(a,0,n-1);
getch();
}
//function for quick sort
void quick(int a[],int p,int r)
{
 int i,q;
 if(p<r)
  {
   q=partition(a,p,r);
   quick(a,p,q-1);
   quick(a,q+1,r);
  }
  printf("\nResult after sorting:\n");
  for(i=0;i<=r;i++)
   printf("%d  ",a[i]);
}

//partition function
int partition(int a[],int p,int r)
{
 int i,j,x,temp;
 x=a[p];
 i=p;
 j=r+1;
 do
  {
   do
    {
     i++;
    }while(a[i]<x&&i<=r);
   do
   {
    j--;
   }while(x<a[j]);
  if(i<j)
   {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    }
   }while(i<j);
  a[p]=a[j];
  a[j]=x;
  return j;
}

