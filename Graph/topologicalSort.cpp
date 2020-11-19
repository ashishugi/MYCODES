#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#include<vector>
#include<queue>
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
#define pb push_back
 bool topological(vector<vector<int>>& edges,int node,vector<int>& in_degree,vector<int>& res){
    queue<int> curr;
    for(int i=0;i<in_degree.size();i++){
        if(in_degree[i]==0){
            curr.push(i);
        }
    }
    while(!curr.empty()){
        int pos = curr.front();
        curr.pop();
        res.pb(pos);
        for(int i=0;i<edges[pos].size();i++){
            int val = edges[pos][i];
            in_degree[val]--;
            if(in_degree[val]==0){
                curr.push(val);
            }
        }
    }
    if(res.size() == node){
        return true;
    }
    return false;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,e;
    cin>>n>>e;
    vector<vector<int>> edges(n);
    vector<int> indegree(n,0);
    for(int i=0;i<e;i++){
        int st;
        int end;
        cin>>st>>end;
        edges[st].push_back(end);
        indegree[end]++;
    }
    vector<int> res;
    bool ans = topological(edges,n,indegree,res);
    if(ans){
        for(int x : res){
            cout<<x<<" ";
        }
        cout<<endl;
    }else{
        cout<<" there exist a cycle in the graph"<<endl;
    }
    return 0;
}