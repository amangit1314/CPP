#include<stdio.h>
#include<conio.h>
void bfs(int,int);
void dfs(int,int);
int adj[10][10],visited[10];
void main()
{
 int i,j,n,s,ch;
 clrscr();
 printf("\nEnter number of vertices:");
 scanf("%d",&n);
 printf("\nEnter adjacency matrix:");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     scanf("%d",&adj[i][j]);
    }
   }

 printf("\nAdjacency matrix:\n");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     printf("%d  ",adj[i][j]);
    }
    printf("\n");
   }
 for(i=1;i<=n;i++)
   visited[i]=0;
 printf("\nEnter source vertex:");
 scanf("%d",&s);
 printf("\nEnter your choice\n 1. BFS \n2. DFS\n");
 scanf("%d",&ch);
 switch(ch)
  {
    case 1:
	 bfs(s,n);
	 break;
    case 2:
	 dfs(s,n);
	 break;
   }
}

/*bfs*/
void bfs(int s,int n)
{
 int i,f=-1,r=-1,q[10];
 printf("\nBFS traversal: ");
 printf("\n%d",s);
 visited[s]=1;
 r++;
 f++;
 q[r]=s;
 while(f<=r)
  {
   s=q[f];
   f++;
   for(i=1;i<=n;i++)
    {
     if(adj[s][i]==1 && visited[i]==0)
      {
       printf("  %d",i);
       visited[i]=1;
       r++;
       q[r]=i;
      }
    }
  }
}

/*dfs*/
void dfs(int s,int n)
{
 int i,st[10],top=-1,pop,j,k;
 printf("\nDFS traversal:");
 top++;
 st[top]=s;
 while(top>=0)
 {
  pop=st[top];
  top--;
  if(visited[pop]==0)
   {
    printf("%d ",pop);
    visited[pop]=1;
   }
  else
   continue;
  for(i=n;i>=1;i--)
   {
    if(adj[pop][i]==1 && visited[i]==0)
     {
      top++;
      st[top]=i;
     }
    }
  }
}
