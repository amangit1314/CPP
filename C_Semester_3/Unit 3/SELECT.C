//program for selection sort
#include<stdio.h>
#include<conio.h>
void selection(int a[],int);
void main()
{
 int a[20],n,i;
 clrscr();
 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 selection(a,n);
getch();
}
//function for selection sort
void selection(int a[],int n)
{
 int i,j,k,min,temp;
 for(i=0;i<n;i++)
  {
   min=i;
   for(j=i+1;j<n;j++)
    {
     if(a[j]<a[min])
	min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    printf("\nResult after %d pass:\n",i+1);
    for(k=0;k<n;k++)
      printf("%d  ",a[k]);
   }
  printf("\nResult after sorting:\n");
  for(i=0;i<n;i++)
   printf("%d  ",a[i]);
}