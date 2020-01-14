#include<bits/stdc++.h>
#include<queue>
using namespace std;
int bridge(vector<int>* edge ,int n){
    bool* visited = new bool[n];
    int* level = new int[n];
    for( int i=0;i<n;i++){
        visited[i] = false;
        level[i] =0 ;
    }
    int sol=0;
    queue<int> q;
    q.push(0);
    int flag=0;
    int pos=0;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        visited[val] = true;
       for(int i=0;i<edge[val].size();i++){
           int adj = edge[val][i];
           if(!visited[adj]){
               level[adj] = level[val]+1;
               q.push(adj);
               visited[adj]=true;
               if(adj==n-1){
                   flag=1;
                   pos=adj;
                   break;
               }
           }
       }
        if(flag==1){
            break;
        }
    }
    //delete [] level;
    delete [] visited;
    return level[pos];
}
int main()
{
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>* edge = new vector<int>[n];
        for(int i=0;i<m;i++){
            int s;
            int f;
            cin>>s>>f;
            edge[s-1].push_back(f-1);
            edge[f-1].push_back(s-1);
        }
        int count = bridge(edge,n);
        cout<<count<<endl;
    }
	return 0;
}
