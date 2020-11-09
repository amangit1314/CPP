//Multiple stack implementation using a single Array
#include<stdio.h>
#include<conio.h>
#define MAX 10
int s[MAX];
int top1=-1,top2=MAX;
void push1(int); //to push in the first stack
void push2(int); //to push in the second stack
void pop1();     //pop from stack1
void pop2();     //pop from stack2
void disp1();    //display for stack1
void disp2();    //display for stack2
void main()
{
 int i=1,choice,item;
 clrscr();
 while(i==1)
  {
   printf("\n1.Push s1  2. Push s2 3. Pop1 4. Pop2 5.Display1 6. Display2");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    printf("\nEnter item to push in stack1:");
	    scanf("%d",&item);
	    push1(item);
	    break;
     case 2:
	    printf("\nEnter item to push in stack2:");
	    scanf("%d",&item);
	    push2(item);
	    break;
     case 3:
	    pop1();
	    break;
     case 4:
	    pop2();
	    break;
     case 5:
	    disp1();
	    break;
     case 6:
	    disp2();
	    break;
     default:
	     printf("\nWrong choice");
    }
   printf("\nContinue 1 for Yes:");
   scanf("%d",&i);
  }
 getch();
}

//push function for stack1
void push1(int item)
{
 if(top1<top2-1)
  {
   top1++;
   s[top1]=item;
  }
  else
   printf("\nstack is full");
}

//push function for stack2
void push2(int item)
{
 if(top2>top1+1)
  {
   top2--;
   s[top2]=item;
  }
 else
  printf("\nstack is full");
}
//pop function for stack1
void pop1()
{
 int item;
 if(top1==-1)
  printf("\nStack1 is empty:");
 else
  {
   item=s[top1];
   top1--;
   printf("\nDeleted Element from stack1 is %d",item);
  }
 }

//pop function for stack2
void pop2()
{
 int item;
 if(top2==MAX)
  printf("\nStack2 is empty:");
 else
  {
   item=s[top2];
   top2++;
   printf("\nDeleted Element from stack2 is %d",item);
  }
 }

 //Display function for stack1
 void disp1()
 {
  int i;
  printf("\n");
  for(i=0;i<=top1;i++)
   printf("%d\t",s[i]);
 }

//Display function for stack2
 void disp2()
 {
  int i;
  printf("\n");
  for(i=MAX-1;i>=top2;i--)
   printf("%d\t",s[i]);
 }
