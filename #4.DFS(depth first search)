/********* this is the program for the depth first search and will work on properly on TURBO C compiler***********/
#include<stdio.h>
#include<conio.h>
int arc[5][5];
int status[5];
int node[5];
int n=5;
int top=0;
void ini()
{
int i, j, k;
printf("enter the 5 nodes i.e numeric nodes in integer\n ");
for(i=1;i<=n;i++)
      {
     scanf("%d",&node[i]);
     }
for(i=1;i<=n;i++)
{
		status[i]=1;
}      printf("enter the adjacency matrix i.e arc(25 values eigghter 0 or 1:\n");
	for(i=1;i<=n;i++)//for arc.

	{
	     for(j=1;j<=n;j++)

	   {
		  scanf("%d\t",&arc[i][j]);

	   }

	}
	printf("\n printing the adjacency matrix:\n");
     for(i=1;i<=n;i++)//for arc.

	{
	     for(j=1;j<=n;j++)

	   {
		  printf("%d",arc[i][j]);

	   }   printf("\n");

	}
}
void graph(int s)
{	int i,stack[5],j,k,v;
      top=top+1;
	stack[top]=1;
       status[1]=2;
    printf("the node or dfs traversal is:\n");
while(top>0)

	{
		v=node[stack[top]];

	printf("%d\t",node[v]);

	status[v]=3;
		top=top-1;

		for(i=1;i<=n;i++)

		{
			if(status[i]==1 && arc[v][i]==1)

			{
				top=top+1;

			stack[top]=node[i];

		status[i]=2;
		}

	  }
	}
}
void main()
{
	int i, j, k, s;
	clrscr();
	ini();
	graph(1);

     getch();
}
