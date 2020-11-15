//program for slestion sort
#include<stdio.h>

void insert(int a[],int);
void main()
{
 int a[20],n,i;
 
 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 insert(a,n);

}
//function for bubble sort
void insert(int a[],int n)
{
 int i,j,k;
 for(i=0;i<n;i++)
  {
   k=a[i];
   j=i-1;
   while(j>=0 && a[j]>k)
    {
     a[j+1]=a[j];
     j=j-1;
    }
    a[j+1]=k;
  }
  printf("\nResult after sorting:\n");
  for(i=0;i<n;i++)
   printf("%d  ",a[i]);
}