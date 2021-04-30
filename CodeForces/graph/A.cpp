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
void traverse(int** edges,int v,int e){
    vector<bool> visited(v,false);
    stack<int> st;
    st.push(0);
    visited[0] = true;
    while(!st.empty()){
        int size = st.size();
        while(size--){
            int val = st.top();
            st.pop();
            cout<<val<< " ";
            for(int i=0;i<v;i++){
                if(visited[i]==false && edges[val][i] == 1){
                    st.push(i);
                    visited[i] = true;
                }
            }
        }
    }
    return;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int v,e;
    cin>>v>>e;
    int** edges = new int*[v];
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j] =0;
        }
    }
    for(int i=0;i<e;i++){
        int s;
        int f;
        cin>>s>>f;
        edges[s][f] =1;
    }
    traverse(edges,v,e);
    return 0;
}