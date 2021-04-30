#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int scc(vector<vector<int>>& edge,vector<bool>& visited,int start){
    queue<int> q;
    visited[start]=true;
    q.push(start);
    int count=1;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        for(int i=0;i<edge[val].size();i++){
            if(visited[edge[val][i]] == false){
                count++;
                q.push(edge[val][i]);
                visited[edge[val][i]] = true;
            }
        }
    }
    return count;
}
int getAns(vector<vector<int>> &edge){
    vector<bool> visited(edge.size(),false);
    int res =0;
    for(int i=0;i<edge.size();i++){
        if(visited[i] == false){
            int val = scc(edge,visited,0);
            res += ceil(sqrt(val));
        }
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int nodes;
    cin>>nodes;
    vector<int> u(nodes,0);
    vector<int> v(nodes,0);
    for(int i=0;i<nodes;i++){
        int temp;
        cin>>temp;
        u[i] = temp-1;
    }
    for(int i=0;i<nodes;i++){
        int temp;
        cin>>temp;
        v[i] = temp-1;
    }
    vector<vector<int>> edge(n);
    for(int i=0;i<nodes;i++){
        edge[u[i]].push_back(v[i]);
        edge[v[i]].push_back(u[i]);
    }
    int res = getAns(edge);
    cout<<res<<endl;
    return 0;
}