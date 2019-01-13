#include<stdio.h>
#include<conio.h>
int arc[5][5];
int node[5];
int status[5];
int n=5;
int f=0,r=0;
int q[5];
void ini()
{	int i,j,k;
printf("enter the node in integer (5 nodes)\n");
for(i=1;i<=n;i++)
	{
      scanf("%d",&node[i]);
	}
for(i=1;i<=n;i++)
	{
       status[i]=1;
	}    printf("\n enter the arc of the graph i.e enter the adjacency matrix (25 values eighter 0 or 1)\n:");
for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
	{
     scanf("%d",&arc[i][j]);
	}
   }           printf("\n adjacency matrix is :\n") ;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
	{
     printf("%d \t",arc[i][j]);
	} printf("\n");
   }


}//end of initiallisation function.
void push(int s)
{
	if(r==n)
	{
	  printf("overflow");
	}
     else if(f==0)
	{
	    f=r=1;
	}
    else
     {
		r=r+1;

     }
q[r]=node[s];
status[node[s]]=2;
}
void pop(int s)
{ int i;
if(f==0)
{
printf("underflow");
}
else if(f==r)
{
f=r=0;
}
else
{	f=f+1;
}
	status[s]=3;
}// end of the pop function.
void graph()
{
	int i, j, k;
   push(1);
   printf("\nthe bfs is :\n");
while(f!=0)
{
printf("%d\t",q[f]);
  j=q[f];
pop(q[f]);
for(i=1;i<=n;i++)
   {
      if(status[i]==1 && arc[j][i]==1)

	{ push(i);

	}
    }
}// end of the while .
}// end of the graph.
void main()
{  clrscr();
   ini();

   graph();
   getch();
}
