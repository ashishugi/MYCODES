#include <iostream>
using namespace std;
bool check(int** edge,int n,int st,int ed,bool* visited){
    visited[st] = true;
    for(int i=0;i<n;i++){
     
        if(edge[st][i]==1 && visited[i]==false){
            if(i==ed){
                return true;
            }
            else{
                bool ans= check(edge,n,i,ed,visited);
                if(ans){
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    int n;
    int e;
    cin>>n>>e;
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j] =0;
        }
    }
    for(int i=0;i<e;i++){
        int s,e;
        cin>>s>>e;
        edge[s][e]=1;
        edge[e][s]=1;
    }
    int st,ed;
    cin>>st>>ed;
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
    visited[i] = false;
    }
    bool ans = check(edge,n,st,ed,visited);
   if(ans){
       cout<<"true"<<endl;
   }
    else{
        cout<<"false"<<endl;
    }
    
  return 0;
}
