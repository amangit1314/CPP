//program for insertion sort
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
//function for insertion sort
void insert(int a[],int n)
{
 int i,j,k,m;
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
    printf("\nResult after %d pass:\n",i+1);
    for(m=0;m<n;m++)
      printf("%d  ",a[m]);
  }
  printf("\nResult after sorting:\n");
  for(i=0;i<n;i++)
   printf("%d  ",a[i]);
}
