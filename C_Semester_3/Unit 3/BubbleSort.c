//program for bubble sort
#include<stdio.h>

void bubble(int a[],int);
void main()
{
 int a[20],n,i;

 printf("\nHow many numbers in the list:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 bubble(a,n);

}
//function for bubble sort
void bubble(int a[],int n)
{
 int i,j,k,temp;
 for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
    {
     if(a[j]>a[j+1])
      {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
    printf("\nResult after %d pass:\n",i+1);
    for(k=0;k<n;k++)
      printf("%d  ",a[k]);
  }
  printf("\nResult after sorting:\n");
  for(i=0;i<n;i++)
   printf("%d  ",a[i]);
}
