#include<conio.h>
#include<stdio.h>
#define NULL 0
struct bst
 {
  int info;
  struct bst *left;
  struct bst *right;

 };
typedef struct bst node;
node *root,*temp,*temp1,*newnode;
void create();   //function for the creation of linked list
void insert();  //insert new node
void del();     //delete node
void inorder(node *);      //inorder traversal
void main()
{
 int i=1,choice;
 clrscr();
 while(i==1)
  {
   printf("\n1. Create\n2.Insert node \n3.Del node \n4. Inorder");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    create();
	    break;
     case 2:
	    insert();
	    break;
     case 3:
	    del();
	    break;
     case 8:
	    inorder(root);
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
  int k=1,item;
  root=(node *)malloc(sizeof(node));
  printf("Enter info for root node:");
  scanf("%d",&root->info);
  root->left=NULL;
  root->right=NULL
  printf("More node 1 for yes:");
  scanf("%d",&k);
  temp=root;
  while(k==1)
  {
   newnode=(node *)malloc(sizeof(node));
   printf("Enter info new node:");
   scanf("%d",&newnode->info);
   if(newnode->info>temp->info)
    {
     if(temp->right==NULL)
      temp->right=newnode;


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