#include<bits/stdc++.h>
#include<stack>
#include<vector>
#include<set>
using namespace std;
void dfs(bool* visited,vector<int>* edge,int start,stack<int>& pos){
    visited[start] = true;
    for(int i=0;i<edge[start].size();i++){
        int val = edge[start][i];
        if(!visited[val]){
            dfs(visited,edge,val,pos);
        }
    }
    pos.push(start);
}
void dfs2(vector<int>* edget,bool* visited,int start,unordered_set<int>* component){
    visited[start] = true;
    component->insert(start);
    for(int i=0;i<edget[start].size();i++){
        int val = edget[start][i];
        if(!visited[val]){
            dfs2(edget,visited,val,component);
        }
    }
}
void scc(vector<int>* edge,vector<int>* edget,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    unordered_set< unordered_set<int>* >* components = new unordered_set<unordered_set<int>*>();
    unordered_set<int>* component = new unordered_set<int>();
    stack<int> pos;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(visited,edge,i,pos);
        }
    }
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    while(!pos.empty()){
        int element = pos.top();
        pos.pop();
        unordered_set<int>* component = new unordered_set<int>();
        if(!visited[element]){
            dfs2(edget,visited , element , component);
        }
        components->insert(component);
    }
    unordered_set< unordered_set<int>* >::iterator it1 = components->begin();
    unordered_set< unordered_set<int>* >* final_list = new  unordered_set< unordered_set<int>* >();
    for(;it1!=components->end();it1++){
        unordered_set<int>::iterator it2 = (*it1)->begin();
        int flag =0 ;
        set<int> st;
        copy((*it1)->begin(),(*it1)->end(),inserter(st,st.begin()));
        for(;it2!=(*it1)->end();it2++){
            int val = (*it2);
            for(int i=0;i<edge[val].size();i++){
                if(st.find(edge[val][i])==st.end()){
                    flag=1;
                    break;
                }else{
                    continue;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            final_list->insert((*it1));
        }
    }
    vector<int> ans;
    unordered_set<unordered_set<int>*>::iterator it3 = final_list->begin();
    for(;it3!=final_list->end();it3++){
        unordered_set<int>::iterator it4 = (*it3)->begin();
        for(;it4!=(*it3)->end();it4++){
           ans.push_back((*it4)+1);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    while(1){
    int n;
    cin>>n;
    int e;
    cin>>e;
    if(n==0 || e==0){
        break;
    }
    vector<int>* edge = new vector<int>[n];
    vector<int>* edget = new vector<int>[n];
    for(int i=0;i<e;i++){
        int s,f;
        cin>>s>>f;
        edge[s-1].push_back(f-1);
        edget[f-1].push_back(s-1);
    }
    scc(edge,edget,n);
    } // end of while loop
	return 0;
}
