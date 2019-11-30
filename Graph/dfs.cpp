#include<bits/stdc++.h>
using namespace std;
void display(int** edge,int n,int *visited,int start){
    cout<<start<<" ";
    visited[start]=1;
    for(int i=0;i<n;i++){
        if(edge[start][i]==1){
            if(visited[i]!=1){
                display(edge,n,visited,i);
            }
        }
    }
}
int main(void){
    int n;
    int e;
    cin>>n;
    cin>>e;
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        edge[x][y] =1;
        edge[y][x]=1;
    }
    int* visited = new int[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }
    display(edge,n,visited,0);
}