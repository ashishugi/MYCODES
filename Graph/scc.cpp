
#include<bits/stdc++.h>
#include<stack>
#include<vector>
#include<unordered_set>
using namespace std;
void dfs(vector<int>* edge,int start,unordered_set<int>& visited,stack<int>& finish){
  visited.insert(start);
  for(int i =0;i<edge[start].size();i++){
      int adj = edge[start][i];
      if(visited.count(adj) == 0){
        dfs(edge,adj,visited,finish);
      }
  }

  finish.push(start);
}
void dfs2(vector<int>* edge,int start,unordered_set<int>* component,unordered_set<int>& visited){
  visited.insert(start);
  component->insert(start);
  for(int i =0;i < edge[start].size();i++){
      int adj = edge[start][i];
      if(visited.count(adj) == 0){
        dfs2(edge,adj,component ,visited);
      }
  }

}
unordered_set<unordered_set<int>* >* getscc(vector<int>* edge,vector<int>* edget,int n){
  unordered_set<int> visited;
  stack<int> finish;
  for(int i=0;i<n;i++){
    if(visited.count(i)==0){
      dfs(edge,i,visited,finish);
    }
  }
  unordered_set<unordered_set<int>* >* output = new unordered_set<unordered_set<int>* >();
  visited.clear();
  while(!finish.size()!=0){
      int element = finish.top();
      finish.pop();
      if(visited.count(element)!=0){
        continue;
      }
      unordered_set<int>* component = new unordered_set<int>();
      dfs2(edget,element,component,visited);
      output->insert(component);
  }
  return output;
}

int main(void){
  int n;
  cin>>n;
  vector<int>* edge = new vector<int>[n];
  vector<int>* edget = new vector<int>[n];
  int m;
  cin>>m;
  for (int i = 0; i < m; i++){
    int k,j;
    edge[j-1].push_back(k-1);
    edget[k-1].push_back(j-1);
  }
  unordered_set<unordered_set<int>* >* component = getscc(edge,edget,n);
  unordered_set<unordered_set<int>* >::iterator it = component->begin();
  while(it!=component->end()){
    unordered_set<int>* component = *it;
     unordered_set<int>::iterator it2= component->begin();
     while (it2!=component->end())
     {
        cout<<*it2+1<<" ";
        it2++;
     }
     cout<<endl;
     it++;
  }
  delete [] component;
}