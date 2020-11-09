#include<stdio.h>
#include<conio.h>
void radix(int a[],int);
int largest(int a[],int);
void main()
{
 int i,n,a[10];
 clrscr();
 printf("\nHow many numbers:");
 scanf("%d",&n);
 printf("\nEnter elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 radix(a,n);
 printf("\nSorted array is:\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

//function to perform sorting
void radix(int a[],int n)
{
 int b[10][10],bk[10];
 int i,j,k,r,nop=0,div=1,large,p;
 large=largest(a,n);
 printf("\nLargest element is %d",large);
 while(large>0)
  {
    nop++;
    large/=10;
   }
 for(p=0;p<nop;p++)
  {
   for(i=0;i<10;i++)
    bk[i]=0;
   for(i=0;i<n;i++)
    {
     r=(a[i]/div)%10;
     b[r][bk[r]]=a[i];
     bk[r]+=1;
    }
  i=0;
  for(k=0;k<10;k++)
  {
   for(j=0;j<bk[k];j++)
    {
     a[i]=b[k][j];
     i++;
    }
  }
  div*=10;
  printf("\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 }
}

//function to find largest
int largest(int a[],int n)
{
 int large=a[0],i;
 for(i=1;i<n;i++)
  {
   if(large<a[i])
    large=a[i];
   }
 return large;
}






