#include <iostream>
#include<queue>
using namespace std;
bool check(int** edge,int n,int start){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edge[val][i]==1 && visited[i]==false){
                q.push(i);
                visited[i] = true;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            return false;
        }
    }
    return true;
}
int main() {
   int n,e;
    cin>>n>>e;
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j] =0;
        }
    }
    for(int i=0;i<e;i++){
        int sv,ev;
        cin>>sv>>ev;
        edge[sv][ev]=1;
        edge[ev][sv]=1;
    }
    bool sol = check(edge,n,0);
    if(sol){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
  return 0;
}
