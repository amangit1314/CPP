/*program for the implementation of dijkstras algorithm*/
#include<stdio.h>
#include<conio.h>
#define MAX 10
void dijkstra(int cost[MAX][MAX],int n,int s);
void main()
{
 int g[MAX][MAX],i,j,n,s;
 clrscr();
 printf("\nEnter number of vertices:");
 scanf("%d",&n);
 printf("\nEnter cost adjacency matrix:");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     scanf("%d",&g[i][j]);
    }
  }
 printf("\nEnter source vertex:");
 scanf("%d",&s);
 dijkstra(g,n,s);
 getch();
}

/*dijkstra function*/
void dijkstra(int g[MAX][MAX],int n,int s)
{
 int cost[MAX][MAX],dist[MAX],pred[MAX],visited[MAX],count,mindist,nextnode,i,j;
 /*pred[] stores predecessor of each node
  count gives the number of nodes seen so far*/
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     if(g[i][j]==0)
	cost[i][j]=999;
     else
	cost[i][j]=g[i][j];
    }
   }
 printf("\nCost Adjacency matrix:\n");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     printf("\t%d",cost[i][j]);
    }
    printf("\n");
   }
 /*initialize pred[], dist[] and visited[]*/
 for(i=1;i<=n;i++)
 {
  visited[i]=0;
  pred[i]=s;
  dist[i]=cost[s][i];
 }
 dist[s]=0;
 visited[s]=1;
 count=1;

 while(count<n)
 {
  mindist=999;
  /*nextnode gives the node at minimum distance*/
  for(i=1;i<=n;i++)
   {
    if(dist[i]<mindist && !visited[i])
      {
       mindist=dist[i];
       nextnode=i;
      }
    }
    visited[nextnode]=1;
   /*check if path exist through nextnode*/
   for(i=1;i<=n;i++)
    {
     if(!visited[i])
      if(mindist+cost[nextnode][i]<dist[i])
      {
       dist[i]=mindist+cost[nextnode][i];
       pred[i]=nextnode;
      }
    }
   count++;
  }
 /*print path and distance of each node*/
 for(i=1;i<=n;i++)
  {
   if(i!=s)
   {
    printf("\nDistance of node %d=%d",i,dist[i]);
    printf("\nPath=%d ",i);
    j=i;
    do
     {
      j=pred[j];
      printf(" <- %d ",j);
     }while(j!=s);
    }
  }
}
