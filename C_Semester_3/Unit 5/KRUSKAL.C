/*program for the implementation of kruskals algorithm*/
#include<stdio.h>
#include<conio.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[10][10],parent[10];
int find(int);
void kruskal();
int uni(int,int);
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
     printf("%d  ",cost[i][j]);
    }
    printf("\n");
   }
   kruskal();
 getch();
}

/*kruskal function*/
void kruskal()
{
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
     if(cost[i][j]<min)
      {
       min=cost[i][j];
       a=u=i;
       b=v=j;
      }
    }
   }
  u=find(u);
  v=find(v);
  if(uni(u,v))
   {
    printf("\n%d edge (%d,%d)=%d",ne++,a,b,min);
    mincost+=min;
   }
  cost[a][b]=cost[b][a]=999;
 }
printf("\nMinimum cost=%d",mincost);
}

/*find function*/
int find(int i)
 {
  while(parent[i])
   i=parent[i];
  return i;
 }

 /*union function*/
int uni(int i,int j)
{
 if(i!=j)
  {
   parent[j]=i;
   return 1;
  }
 return 0;
}
