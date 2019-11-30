#include<bits/stdc++.h>
#include<queue>
using namespace std;
void print(int** edge,int n,int start,bool* visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        cout<<q.front()<< " ";
        int val =q.front();
         q.pop();
       
        for(int i=0;i<n;i++){
            if((edge[val][i]==1) && (visited[i]==false)){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main(){
    int n;
    int e;
    cin>>n>>e;
    //Using adjacency Matrix .
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int s,e;
        cin>>s>>e;
        edge[s][e] = 1;
        edge[e][s] = 1;
    }
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]  = false;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            print(edge,n,i,visited);
        }
    }
    cout<<endl;
}