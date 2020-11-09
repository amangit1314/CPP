//program in c to evaluate postfix expression
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 50
char s[SIZE],post[SIZE];
int top=-1;
void push(int);
int pop();
void main()
{
 char ch;
 int i,v,a,b;
 clrscr();
 printf("\nEnter an postfix expression:");
 gets(post);
 for(i=0;post[i]!='\0';i++)
  {
   ch=post[i];
   if(isdigit(ch))
    {
     push(ch-'0');
    }
   else
     if(ch=='+'||ch=='*'||ch=='-'||ch=='/')
      {
       a=pop();
       b=pop();

     switch(ch)
      {
	case '*':
	      v=b*a;
	      break;
	case '/':
	      v=b/a;
	      break;
	case '+':
	      v=b+a;
	      break;
	case '-':
	      v=b-a;
	      break;
	}
    push(v);
    }
   }
  printf("\nResult is:%d",pop());
 }


 void push(int item)
  {
   if(top>=SIZE-1)
    printf("\nStack overflow:");
   else
   {
    top++;
    s[top]=item;
   }
  }

int pop()
 {
  int item;
   if(top==-1)
    printf("\nStack underflow");
   else
    {
     item=s[top];
     top--;
     return item;
    }
 }
