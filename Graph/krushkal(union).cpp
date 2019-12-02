#include<bits/stdc++.h>
#include<queue>
using namespace std;
class edgeClass{
    public:
    int u;
    int v;
    int wt;
};
bool compare(edgeClass a,edgeClass b){
    return a.wt<b.wt;
}
bool Union(int *parent,int u,int v,int index,int n){
    int top_u = parent[u];
    int top_v = parent[v];
    while(top_u!=u){
        u = top_u;
        top_u = parent[top_u];
    }
    while(top_v!=v){
        v = top_v;
        top_v = parent[top_v];
    }
    if(top_u != top_v){
        parent[top_u] = top_v;
        return true;
    }
    return false;
    // int p1=u,p2=v; 
    // while(p1!=parent[p1]||p2!=parent[p2]){ 
    //     p1=parent[p1]; p2=parent[p2];
    // }
    // if(p1!=p2){
    //     parent[p1]=parent[p2];
    //     return true;
    // }
    // return false;
}
void krushkal(edgeClass *edge , int n,int e){
    int count =0;
    edgeClass *output = new edgeClass[e+1];
    int *parent = new int[n];
    for(int i=0;i<n;i++){
        parent[i] = i;
    }
    int index=0;
    while(count < (n-1) && index<e){
        int u,v;
        u = edge[index].u;
        v = edge[index].v;
        if(Union(parent,u ,v, index,n)){
            output[count].u = edge[index].u;
            output[count].v = edge[index].v;
            output[count].wt = edge[index].wt;
            count++;
        }
      index++;
    }
   // cout<< " the resulant is"<<endl;
     for(int i=0;i<count;i++){
        cout<<min(output[i].u,output[i].v)<< " "<<max(output[i].u,output[i].v)<<" " <<output[i].wt<<endl;
    }
}
int main(void){
    int n,e;
    cin>>n>>e;
    edgeClass *edge = new edgeClass[e+1];
    for(int i=0;i<e;i++){
        cin>>edge[i].u>>edge[i].v>>edge[i].wt;
    }
    sort(edge,edge+e,compare);
    // cout<<"after sort function"<<endl;
    //  for(int i=0;i<e;i++){
    //     cout<<edge[i].u<< " " <<edge[i].v<< " " <<edge[i].wt<<endl;
    // }
    krushkal(edge,n,e);

}