#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
#include<stack>
typedef long long ll;
using namespace std;
void dfs(vector<int>* edge , bool* visited,int start,int n,unordered_set<int>* component){
    visited[start] = true;
    component->insert(start);
    for(int i=0;i<edge[start].size();i++){
        int adj = edge[start][i];
        if(!visited[adj]){
            dfs(edge,visited,adj,n,component);
        }
    }
}

ll scc(vector<int>* edge ,int n,ll* ar){
    unordered_set<unordered_set<int>* > * components = new unordered_set<unordered_set<int>*>();
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] =false;
    }
    for(int i=0;i<n;i++){
        unordered_set<int>* component = new unordered_set<int>();
       if(!visited[i]){
           dfs(edge,visited,i,n,component);
       }
       components->insert(component);
   }
    ll sum =0 ;
    unordered_set<unordered_set<int>* >::iterator it1 = components->begin();
    for(;it1!=components->end();it1++){
        ll temp_sum=0 ;
        unordered_set<int>::iterator it2 = (*it1)->begin();
        for(;it2!=(*it1)->end();it2++){
          //  cout<<(*it2)+1<< " ";
            temp_sum+= (ar[(*it2)]);
        }
       // cout<<endl;
        if(sum <= temp_sum){
            sum = temp_sum;
        }
    }
    delete [] visited;
    delete components;
    return sum;
}
int main(){
    // making of adjacency list
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
           vector<int>* edge = new vector<int>[n];
            int e;
            cin>>e;
        for(int i=0;i<e;i++){
            int s,f;
            cin>>s>>f;
            edge[s-1].push_back(f-1);
            edge[f-1].push_back(s-1);
        }
        ll* ar = new ll[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        ll sol = scc(edge,n , ar);
         delete [] ar;
       cout<<sol<<endl;
    }
    return 0;
}
