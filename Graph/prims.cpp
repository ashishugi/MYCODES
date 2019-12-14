#include<bits/stdc++.h>
using namespace std;
int getmin(bool* visited ,int n,int* wt){
    int minimum =-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minimum==-1 || wt[i] < wt[minimum])){
            minimum = i;
        }
    }
    visited[minimum] = true;
    return minimum;
}
void prims(int** edge,int n){
    int* parent = new int[n];
    bool* visited = new bool[n];
    int *wt = new int[n];
    parent[0]=-1;
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i] = INT_MAX;
    }
    for(int i=0;i<n-1;i++){
        int minval = getmin(visited,n,wt);
        for(int j=0;j<n;j++){
            if(edge[minval][j]!=0 && !visited[j]){
                if(edge[minval][j] < wt[j]){
                    wt[j] = edge[minval][j];
                    parent[j] = minval;
               }
            }
        }
    } // end of outer for loop
    for(int i=1;i<n;i++){ //  we started from 1 because if we start from 0 the  the parent of 0 is -1 which is not a valid vertex , in case of 1 the vertex 0 will also come .
        if(parent[i] < i){
            cout<<parent[i]<< " "<<i<< " ";
        }else{
            cout<<i<< " "<<parent[i]<< " ";
        }
        cout<<wt[i]<<endl;
    }
}
int main(void){
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
        int s,f,wt;
        cin>>s>>f>>wt;
        edge[f][s]= wt;
        edge[s][f] = wt;
    }
    prims(edge,n);
}   