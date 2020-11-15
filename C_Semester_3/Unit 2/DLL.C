//Program for doubly linked list
#include<stdio.h>
#include<conio.h>
#define NULL 0
struct list
 {
  struct list *prev;
  int info;
  struct list *next;
 };
typedef struct list node;
node *start,*last,*temp,*temp1,*newnode;
void create();   //function for the creation of linked list
void insert_b();  //insert new node at the beginning
void insert_e();  //insert new node at the end
void insert_p();  //insert new node at the position
void del_f();     //delete first node
void del_l();     //delete last node
void del_m();     //delete intermediate node
void disp_b();    //display from first node
void disp_l();    //display from last node
void main()
{
 int i=1,choice;
 clrscr();
 while(i==1)
  {
   printf("\n1. Create\n2. Insert at Beg\n3. Insert at Pos\n4. insert at end");
   printf("\n5. Del first \n6. Del last \n7. Del intermedate \n8. Display forward");
   printf("\n9. Display Backward");
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
	    disp_b();
	    break;
     case 9:
	    disp_l();
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
  newnode=(node *)malloc(sizeof(node));
  start=newnode;
  newnode->prev=NULL;
  do
  {
   printf("Enter info new node:");
   scanf("%d",&newnode->info);
   printf("More node 1 for yes:");
   scanf("%d",&k);
   if(k==1)
    {
     newnode->next=(node *)malloc(sizeof(node));
     newnode->next->prev=newnode;
     newnode=newnode->next;
    }
   else
    {
     newnode->next=NULL;
     last=newnode;
    }
   }while(k==1);
}

//function to insert node at the beginning
void insert_b()
{
  //allocate space for new node
  newnode=(node *)malloc(sizeof(node));
  printf("Enter info for new node:");
  scanf("%d",&newnode->info);
  newnode->prev=NULL;
  newnode->next=start;
  start->prev=newnode;
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
  newnode->prev=last;
  last->next=newnode;
  last=newnode;

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
  if(temp->next==NULL)
    printf("\nNode not fund");
  else
   {
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next->prev=newnode;
    temp->next=newnode;
   }
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
    temp=start->next;
    printf("\nDeleted node:%d",start->info);
    temp->prev=NULL;
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
    temp=last->prev;
    printf("\nDeleted node:%d",last->info);
    temp->next=NULL;
    last=temp;
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
    temp->next->prev=temp;
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

//function to display linked list forward
void disp_b()
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

//function to display linked list backward
void disp_l()
 {
  temp=last;
  printf("\n");
  while(temp->prev!=NULL)
   {
    printf("%d\t",temp->info);
    temp=temp->prev;
   }
   printf("%d",temp->info);
  }
