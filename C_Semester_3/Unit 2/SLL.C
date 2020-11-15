//Program for singly linked list
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
void disp(node *);      //display linked list
void rev();      //function to reverse linked list
void main()
{
 int i=1,choice;
 clrscr();
 while(i==1)
  {
   printf("\n1. Create\n2. Insert at Beg\n3. Insert at Pos\n4. insert at end");
   printf("\n5. Del first \n6. Del last \n7. Del intermedate \n8. Display");
   printf("\n9. Reverse");
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
	    disp(start);
	    break;
     case 9:
	    rev();
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
  do
  {
   printf("Enter info new node:");
   scanf("%d",&newnode->info);
   printf("More node 1 for yes:");
   scanf("%d",&k);
   if(k==1)
    {
     newnode->next=(node *)malloc(sizeof(node));
     newnode=newnode->next;
    }
   else
    newnode->next=NULL;
   }while(k==1);
}

//function to insert node at the beginning
void insert_b()
{
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  newnode->next=start;
  start=newnode;
}

//function to insert node at the end
void insert_e()
{
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  newnode->next=NULL;
  temp=start;
  while(temp->next!=NULL)
     temp=temp->next;
  temp->next=newnode;
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
}


//function to delete first node
void del_f()
{
 if(start->next==NULL)  //last node
  {
   printf("\nDeleted node:%d",start->info);
   start=NULL;
  }
 else
  {
    temp=start;
    printf("\nDeleted node:%d",temp->info);
    temp=temp->next;
    start=temp;
   }
}

//function to delete last node
void del_l()
{
 if(start->next==NULL)  //last node
  {
   printf("\nDeleted node:%d",start->info);
   start=NULL;
  }
 else
  {
    temp=start;
    while(temp->next->next!=NULL)
      temp=temp->next;
    printf("\nDeleted node:%d",temp->next->info);
    temp->next=NULL;
   }
}


//function to delete intermediate node
void del_m()
{
 int item;
 temp=start;
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
}

//function for reversing linked list
void rev()
{
 node *pnode,*cnode;
 pnode=start;
 cnode=start->next;
 start=pnode->next;
 if(start==NULL)
  printf("\nOnly one node in list");
 else
  {
   pnode->next=NULL;
   while(start!=NULL)
    {
     start=start->next;
     cnode->next=pnode;
     pnode=cnode;
     cnode=start;
    }
  start=pnode;
 }
}

//function to display linked list
void disp(node *head)
 {
  /*temp=start;
  printf("\n");
  while(temp->next!=NULL)
   {
    printf("%d\t",temp->info);
    temp=temp->next;
   }*/
   if(head==NULL)
    return;
   disp(head->next);
   printf("%d\t",head->info);
  }
