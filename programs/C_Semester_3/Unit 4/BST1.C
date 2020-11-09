/*program for Binary Search Tree*/
#include<stdio.h>
#include<conio.h>
typedef struct bst
{
 int info;
 struct bst *left;
 struct bst *right;
}node;
node *create();
void insert(node *,node *);
void search(node *,int);
void del(node *);
void preorder(node *);
void inorder(node *);
void postorder(node *);
void main()
{
 int c=1,k=1,choice,item;
 node *root=NULL,*temp;
 clrscr();
 while(c==1)
 {
   printf("\n1. Create \n2. Search \n3. Delete \n4. Diplay");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
    {
       case 1: do
	  {
	    temp=create();
	    if(root==NULL)
	      root=temp;
	    else
	     insert(root,temp);
	    printf("\nContinue 1 for yes:");
	    scanf("%d",&k);
	    }while(k==1);
	    break;
       case 2:
	    printf("\nEnter item to search:");
	    scanf("%d",&item);
	    search(root,item);
	    break;
       case 4:
	    printf("\nPreorder Traversal  :");
	    preorder(root);
	    printf("\nInorder Traversal   :");
	    inorder(root);
	    printf("\nPostorder Traversal :");
	    postorder(root);
	    break;
	  }
      printf("\nContinue next operation 1 for yes:");
      scanf("%d",&c);
     }
 }

 //create function
node *create()
{
 node *temp;
 printf("\nEnter data:");
 temp=(node *)malloc(sizeof(node));
 scanf("%d",&temp->info);
 temp->left=temp->right=NULL;
 return temp;
}

//insert function
void insert(node *root,node *temp)
 {
  if(temp->info<root->info)
   {
    if(root->left!=NULL)
     insert(root->left,temp);
    else
     root->left=temp;
   }
  if(temp->info>root->info)
   {
    if(root->right!=NULL)
     insert(root->right,temp);
    else
     root->right=temp;
   }
 }

/*search function*/
void search(node *root,int item)
 {
    if(root==NULL)
     printf("\nSearch unsuccessful");
    else
     {
      if(root->info==item)
       {
	 printf("\nSearch successful:");
       }
      else
       {
	if(item<root->info)
	  search(root->left,item);
	else
	  if(item>root->info)
	    search(root->right,item);
	}
      }

 }

/*preorder traversal*/

void preorder(node *root)
  {
   if(root!=NULL)
    {
     printf(" %d   ",root->info);
     preorder(root->left);
     preorder(root->right);
    }
  }

/*inorder Traversal*/
void inorder(node *root)
  {
   if(root!=NULL)
    {
     inorder(root->left);
     printf(" %d   ",root->info);
     inorder(root->right);
    }
  }

/*postorder traversal*/
void postorder(node *root)
  {
   if(root!=NULL)
    {
     postorder(root->left);
     postorder(root->right);
     printf(" %d   ",root->info);
    }
  }



