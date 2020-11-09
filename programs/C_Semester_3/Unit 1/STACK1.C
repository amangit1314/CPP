//Array implementation of stack
#include<stdio.h>
#include<conio.h>
#define MAX 10
int s[MAX];
int top=-1;
void push(int);
void pop();
void disp();
void main()
{
 int i=1,choice,item;
 clrscr();
 while(i==1)
  {
   printf("\n1. Push \n2. Pop \n3. Display");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    printf("\nEnter item to push:");
	    scanf("%d",&item);
	    push(item);
	    break;
     case 2:
	    pop();
	    break;
     case 3:
	    disp();
	    break;
     default:
	     printf("\nWrong choice");
    }
   printf("\nContinue 1 for Yes:");
   scanf("%d",&i);
  }
 getch();
}

//push function
void push(int item)
{
 if(top==MAX-1)
   printf("\nstack is full");
 else
  {
   top++;
   s[top]=item;
  }
}

//pop function
void pop()
{
 int item;
 if(top==-1)
  printf("\nStack is empty:");
 else
  {
   item=s[top];
   top--;
   printf("\nDeleted Element is %d",item);
  }
 }

 //Display function
 void disp()
 {
  int i;
  printf("\n");
  for(i=0;i<=top;i++)
   printf("%d\t",s[i]);
 }



