//program in c to convert infix to postfix
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 50
char s[SIZE],infix[SIZE],post[SIZE];
int top=-1;
void push(char);
char pop();
int pre(char);
void main()
{
 char ch;
 int i,k,p=0;
 clrscr();
 printf("\nEnter an infix expression:");
 gets(infix);
 for(i=0;infix[i]!='\0';i++)
  {
   ch=infix[i];
   if(isalnum(ch))
    {
     post[p++]=ch;
    }
   else
     if(ch=='(')
      push(ch);
     else
      if(ch==')')
       {
	while(s[top]!='(')
	 {
	  post[p++]=pop();
	 }
	pop();
       }
      else
       if(ch=='/'||ch=='*'||ch=='+'||ch=='-')
	 {
	  if(pre(ch)>pre(s[top]))
	   push(ch);
	  else
	   {
	    while(pre(ch)<=pre(s[top]))
	     post[p++]=pop();
	    push(ch);
	   }
	 }
     }
   while(top>-1)
    post[p++]=pop();
    post[p]='\0';
 printf("\nPostfix expression is :%s",post);
}

int pre(char ch)
 {
  if(ch=='('||ch==')')
   return 0;
  else
    if(ch=='+'||ch=='-')
      return 1;
    else
     if(ch=='/'||ch=='*')
   return 2;
 }

 void push(char item)
  {
   if(top>=SIZE-1)
    printf("\nStack overflow:");
   else
   {
    top++;
    s[top]=item;
   }
  }
char pop()
 {
  char item;
   if(top==-1)
    printf("\nStack underflow");
   else
    {
     item=s[top];
     top--;
     return item;
    }
 }
