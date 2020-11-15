/*program for the implementation of prims algorithm*/
#include<stdio.h>
#include<conio.h>
int i,j,a,b,u,v,n,ne=1;
int min,mincost=0,cost[10][10],visited[10]={0};
void prims();
void main()
{
 clrscr();
 printf("\nEnter number of vertices:");
 scanf("%d",&n);
 printf("\nEnter cost adjacency matrix:");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     scanf("%d",&cost[i][j]);
     if(cost[i][j]==0)
	cost[i][j]=999;
    }
   }

 printf("\nCost Adjacency matrix:\n");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     printf("%d     ",cost[i][j]);
    }
    printf("\n");
   }
   prims();
 getch();
}

/*prims function*/
void prims()
{
 visited[1]=1;
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
   for(j=1;j<=n;j++)
    if(cost[i][j]<min)
      if(visited[i]!=0)
      {
       min=cost[i][j];
       a=u=i;
       b=v=j;
      }
    if(visited[u]==0 || visited[v]==0)
     {
      printf("\n%d edge (%d,%d)=%d",ne++,a,b,min);
      mincost+=min;
      visited[b]=1;
     }
  cost[a][b]=cost[b][a]=999;
 }
 printf("\nMinimum cost=%d",mincost);
}