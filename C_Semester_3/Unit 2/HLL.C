//Program for Header linked list
#include<stdio.h>
#include<conio.h>
#define NULL 0
struct list
 {
  int info;
  struct list *next;
 };
 typedef struct list node;
node *start,*temp,*temp1,*newnode;
void create();   //function for the creation of linked list
void insert_b();  //insert new node at the beginning
void insert_e();  //insert new node at the end
void insert_p();  //insert new node at the position
void del_f();     //delete first node
void del_l();     //delete last node
void del_m();     //delete intermediate node
void disp();      //display linked list
int count=0;
void main()
{
 int i=1,choice;
 clrscr();
 while(i==1)
  {
   printf("\n1. Create\n2. Insert at Beg\n3. Insert at Pos\n4. insert at end");
   printf("\n5. Del first \n6. Del last \n7. Del intermedate \n8. Display");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    create();
	    break;
     case 2:
	    insert_b();
	    break;
     case 3:
	    insert_p();
	    break;
     case 4:
	    insert_e();
	    break;
     case 5:
	    del_f();
	    break;
     case 6:
	    del_l();
	    break;
     case 7:
	    del_m();
	    break;
     case 8:
	    disp();
	    break;
     default:
	    printf("\nChoice is wrong");
     }
    printf("\nContinue 1 for yes");
    scanf("%d",&i);
   }
 }

//function for the creation of linked list
void create()
 {
  int k=1;
  start=(node *)malloc(sizeof(node));
  newnode=start;
  while(k==1)
  {
     newnode->next=(node *)malloc(sizeof(node));
     newnode=newnode->next;
     count++;
     printf("Enter info new node:");
     scanf("%d",&newnode->info);
     printf("More node 1 for yes:");
     scanf("%d",&k);
     if(k!=1)
     {
      newnode->next=NULL;
      start->info=count;
      break;
     }
   }
}

//function to insert node at the beginning
void insert_b()
{
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  newnode->next=start->next;
  start->next=newnode;
  start->info=++count;
}

//function to insert node at the end
void insert_e()
{
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  newnode->next=NULL;
  temp=start->next;
  while(temp->next!=NULL)
     temp=temp->next;
  temp->next=newnode;
  start->info=++count;
}

//function to insert node at particular position
void insert_p()
{
  int t;
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  printf("\nEnter info of target node:");
  scanf("%d",&t);
  temp=start;
  while(temp->next!=NULL)
   {
     if(temp->next->info==t)
       break;
     else
      temp=temp->next;
   }
  temp1=temp->next;
  temp->next=newnode;
  newnode->next=temp1;
  start->info=++count;
}


//function to delete first node
void del_f()
{
 temp=start->next;
 if(temp->next==NULL)  //last node
  {
   printf("\nDeleted node:%d",temp->info);
   start->next=NULL;
  }
 else
  {
    printf("\nDeleted node:%d",temp->info);
    temp=temp->next;
    start->next=temp;
   }
 start->info=--count;
}

//function to delete last node
void del_l()
{
 temp=start->next;
 if(temp->next==NULL)  //last node
  {
   printf("\nDeleted node:%d",temp->info);
   start->next=NULL;
  }
 else
  {
    while(temp->next->next!=NULL)
      temp=temp->next;
    printf("\nDeleted node:%d",temp->next->info);
    temp->next=NULL;
   }
 start->info=--count;
}


//function to delete intermediate node
void del_m()
{
 int item;
 temp=start->next;
 printf("\nWhich node to be deleted:");
 scanf("%d",&item);
 while(temp->next->next!=NULL)
 {
  if(temp->next->info==item)
   {
    printf("\nDeleted element is:%d",temp->next->info);
    temp->next=temp->next->next;
    break;
   }
   temp=temp->next;
  }
 start->info=--count;
}

//function to display linked list
void disp()
 {
  temp=start;
  printf("\n");
  while(temp->next!=NULL)
   {
    printf("%d\t",temp->info);
    temp=temp->next;
   }
   printf("%d",temp->info);
  }