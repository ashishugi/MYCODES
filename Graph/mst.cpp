#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    int u;
    int v;
    int cost;
};
bool compare(graph a , graph b){
  return a.cost < b.cost;
}
int main()
{
	int n,e;
    cin>>n>>e;
    graph* edge = new graph[n];
    for(int i=0;i<e;i++){
        int s,f,c;
        cin>>s>>f>>c;
        edge[i].u=s-1;
        edge[i].v=f-1;
        edge[i].cost = c;
    }
    sort(edge,edge+e,compare);
    separation(edge,n,e);
	return 0;
}
