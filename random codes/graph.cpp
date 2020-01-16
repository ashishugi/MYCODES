#include<iostream>
#include<list>
using namespace std;
class graph
{
   int vertices ;
   list<int> *adj;
   public:
   void dfsinti(int v,bool visited[]);
   graph(int v);
   void edge(int u,int v);
   void dfs(int v);
};
graph::graph(int v)
{
  (this)->vertices=v;
  adj = new list<int>[v];
}
void graph::edge(int u,int v)
{
  adj[u].push_back(v);
}
void graph::dfsinti(int v,bool visited[])
{
   visited[v]=true;
   cout<<v<<" ";
   list<int>::iterator i;
   for(i=adj[v].begin();i!=adj[v].end();i++)
   {
     if(!visited[*i])
     {
        dfsinti(*i,visited);
     }
   }
}
void graph::dfs(int v)
{
   bool *visited=new bool[v];
   for(int i=0;i<v;i++)
   {
      visited[i]=false;

   }
   dfsinti(v,visited);
}
int main(void)
{
   graph g(4);
   g.edge(0,1);
   g.edge(0,2);
   g.edge(1,2);
   g.edge(2,0);
   g.edge(2,3);
   g.edge(3,3);
   g.dfs(0);
   return 0;

}

