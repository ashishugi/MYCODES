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
    bool ispath(int start,int end , int **matrix,int n){
        queue<int> q;
        bool *visited = new bool[n];
        for(int i=0;i<n;i++){
            visited[i]=false;
        }
        q.push(start);
        visited[start]  =true;
        while (!q.empty())
        {
            int val = q.front();
            q.pop();
            for(int i=0;i<n;i++){
                if(matrix[val][i]!=0 && visited[i]==false){
                    q.push(i);
                    visited[i] = true;
                    if(i==end){
                        return true;
                    }
                }
            }
        }
        matrix[start][end] =1;
        matrix[end][start]=1;
        return false;
    }
    void krushkal(edgeClass *edge , int n,int e){
        int count =0;
        edgeClass *output = new edgeClass[e];
        int **matrix = new int*[n];
 
        for(int i=0;i<n;i++){
            matrix[i] = new int[n+1];
 
            for(int j=0;j<n;j++){
                matrix[i][j] =0;
            }
        }
        int index1=0;
        while(count < (n-1) && index1<e){
 
            if(!(ispath(edge[index1].u,edge[index1].v,matrix,n))){
                output[count].u = edge[index1].u;
                output[count].v= edge[index1].v;
                output[count].wt = edge[index1].wt;
               count++;
 
            }
                index1++;
 
        }
    //    cout<< " the resulant is"<<endl;
         for(int i=0;i<count;i++){
            cout<<min(output[i].v,output[i].u)<< " " <<max(output[i].u,output[i].v)<< " " <<output[i].wt<<endl;
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