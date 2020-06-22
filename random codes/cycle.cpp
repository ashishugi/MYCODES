#include<bits/stdc++.h>
#include<queue>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
 // Cycle detection in graph using matrix
 int bfs(int** edge , int v , int e,int start){
     bool* visited = new bool[v];
     for(int i=0;i<v;i++){
         visited[i] = false;
     }
     queue<int> q;
     q.push(start);
     visited[start] = true;
     while(!q.empty()){
         int val = q.front();
         q.pop();
         for(int i=0;i<v;i++){
             if(edge[val][i]==1 && visited[i]==false){
                 q.push(i);
                 visited[i] = true;
             }
             else if(edge[val][i] ==1 && visited[i]==true){
                 cout<<val<< " "<<i<<endl;
                 return 1;
             }
         }
     }
     return 0;
 }
int main(void){
    cout<<"enter the number of vertices";
    int v;
    cin>>v;
    int** edge = new int*[v];
    for(int i=0;i<v;i++){
        edge[i] = new int[v];
        for(int j=0;j<v;j++){
            edge[i][j] = 0;
        }
    }
    int e;
    cout<<"enter number of edges"<<endl;
    cin>>e;
    cout<<"now enter the edges"<<endl;
    for(int i=0;i<e;i++){
        int s,f;
        cin>>s>>f;
        edge[s-1][f-1] =1;
        edge[f-1][s-1] =1;
    } 
    int ans = bfs(edge,v,e,1);
    if(ans){
        cout<<"In this graph cycle exists"<<endl;
    }else{
        cout<<"In this graph cycle do not exists"<<endl;
    }
  return 0;
}