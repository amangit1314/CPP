//program for merge sort
#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
void main()
{
 int i,n,a[20];
 clrscr();
 printf("\nHow many numbers:");
 scanf("%d",&n);
 printf("\nEnter numbers:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 mergesort(a,0,n-1);
}

//mergesort function
void mergesort(int a[],int f,int l)
{
 int m,i;
 if(f<l)
 {
  m=(f+l)/2;
  mergesort(a,f,m);
  mergesort(a,m+1,l);
  merge(a,f,m,l);
 }

}

//function to merge subarrays
void merge(int a[],int f,int m,int l)
{
 int i,j,k;
 int n1=m-f+1;
 int n2=l-m;
 int t1[10],t2[10];
 for(i=0;i<n1;i++)
  t1[i]=a[f+i];
 for(j=0;j<n2;j++)
  t2[j]=a[m+1+j];
 k=f;
 i=0;
 j=0;
 while(i<n1 && j<n2)
 {
  if(t1[i]<=t2[j])
   {
    a[k]=t1[i++];
   }
  else
   a[k]=t2[j++];
  k++;
 }
  while(i<n1)
   a[k++]=t1[i++];
  while(j<n2)
   a[k++]=t2[j++];
  printf("\nResult after sorting:\n");
  for(i=0;i<=l;i++)
  printf("%d\t",a[i]);
}
