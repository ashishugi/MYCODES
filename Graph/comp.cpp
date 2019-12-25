#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
#include<stack>
#include<set>
using namespace std;
void dfs(bool* visited,int start,vector<int>* edge ,stack<int>& st){
    visited[start] = true;
    for(int i=0;i<edge[start].size();i++){
        int adj = edge[start][i];
        if(!visited[adj]){
            dfs(visited,adj,edge,st);

        }
    }
    st.push(start);
}
void dfs2(bool* visited,vector<int>* edgeT,int start,unordered_set<int>* com){
     visited[start] = true;
     com->insert(start);
    for(int i=0;i<edgeT[start].size();i++){
        int adj = edgeT[start][i];
        if(!visited[adj]){
            dfs2(visited,edgeT,adj,com);

        }
    }
}
void scc(vector<int>* edge,vector<int>* edgeT,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(visited,i,edge,st);

        }
    }
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    unordered_set<unordered_set<int> *>* collection = new unordered_set<unordered_set<int> *>();
    while(!st.empty()){
       int top = st.top();
        st.pop();

                unordered_set<int>* component = new unordered_set<int>();
                if(!visited[top]){
                    dfs2(visited , edgeT,top,component);
                }
               (collection)->insert(component);


     }
     cout<<"the output at the colection is "<<endl;
    unordered_set< unordered_set<int>* >::iterator itr = collection->begin();
    for(;itr!=collection->end();itr++){
        unordered_set<int>* temp = *itr;
        unordered_set<int>::iterator it = temp->begin();
        for(;it!=temp->end();it++){
            cout<<*it+1<<" ";
        }
        cout<<endl;
    }
    cout<<"now calculating the count"<<endl;
    /*We have to simply count the number here after */
    int count=0;
    unordered_set<unordered_set<int>* > * final = new unordered_set< unordered_set<int>*>();
    unordered_set<int>* compo = new unordered_set<int>();
    unordered_set<unordered_set<int> *>::iterator it = collection->begin();
    for(;it!=collection->end();it++){ //
      unordered_set<int>::iterator it2 = (*it)->begin();
      int element= (*it2),val;
      int flag =0;
      set<int> s;
      copy((*it)->begin(),(*it)->end(), inserter(s , s.begin()));
      for(;it2!=(*it)->end();it2++){
         val = (*it2);
        for(int i=0;i<edge[val].size();i++){
          if(s.find(edge[val][i]) == s.end()){
            flag=1;
            cout<<edge[val][i]<< " ";
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
      //  cout<<element<< " ";
        count++;
      }
      cout<<endl;

    }

    cout<<count<< " "<<endl;
} // end of the function
int main(){
    // making of adjacency list
    int n;
    cin>>n;
     vector<int>* edgeT = new vector<int> [n];
     vector<int>* edge = new vector<int>[n];
   int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int s,f;
        cin>>s>>f;
        edge[s-1].push_back(f-1);
        edgeT[f-1].push_back(s-1);
    }
    scc(edge,edgeT,n);
    return 0;
}
