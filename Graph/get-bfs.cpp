#include <iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
bool flag = false;
map<int,int> bfs(int** edge,int n,int start,int end){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    queue<int> q;
    map<int,int> mp;
    q.push(start);
    visited[start] = true;
    
    while(!q.empty()){
        int val = q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edge[val][i]==1 && visited[i]==false){
                q.push(i);
               visited[i] = true;
               mp[i] = val;
               if(i==end){
                   flag = true;  // means that there exist a path
                   return mp;
               }
            }
        }
    }
    return mp;
}
int main()
{
  int n,e;
    cin>>n>>e;
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++){
        int s,f;
        cin>>s>>f;
        edge[s][f] = 1;
        edge[f][s]=1;
    }
    int v1,v2;
    cin>>v1>>v2;
    map<int,int> mp=bfs(edge,n,v1,v2);
    int key=v2;
    int find;
    if(flag){
    cout<<key<< " ";
    do{
         find = mp[key];
        cout<<find<< " ";
        key = find;
     }while(find!=v1);
        cout<<endl;
    }
    else {
         return 0;
    }
}
