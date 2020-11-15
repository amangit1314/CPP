//program for array implementation of queue
#include<stdio.h>
#include<conio.h>
#define MAX 5
int q[MAX],r=-1,f=-1;
void insert();
void del();
void disp();
void main()
{
 int i=1,choice;
 clrscr();
 while(i==1)
  {
   printf("1. Insert \n2. Delete \n3. Display");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    insert();
	    break;
     case 2:
	    del();
	    break;
     case 3:
	   disp();
	   break;
     default:
	   printf("\nChoice is wrong:");
    } //end switch
   printf("\nContinue 1 for yes:");
   scanf("%d",&i);
  } //end while
 getch();
} //end main

//insert function
void insert()
{
 int item;
 if(r==MAX-1)
   printf("\nQueue is full");
 else
  {
   if(f==-1)
     f=0;
   printf("\nEnter item to insert:");
   scanf("%d",&item);
   r++;
   q[r]=item;
  }
}

//delete function
void del()
{
 int item;
 if(f==-1)
  printf("\nqueue empty");
 else
  {
   if(r==f) //last element
    {
     item=q[f];
     printf("\nDeleted element is:%d",item);
     r=f=-1;
    }
   else
    {
     item=q[f];
     printf("\nDeleted element is:%d",item);
     f++;
    }
   }
 }

//display function
void disp()
{
 int i;
 printf("\n");
 if(f==-1)
   printf("\nQueue empty");
 else
  {
   for(i=f;i<=r;i++)
    printf("%d\t",q[i]);
  }
}
