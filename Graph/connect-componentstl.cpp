    #include<bits/stdc++.h>
    #include<vector>
    #include<unordered_set>
    using namespace std;
    void dfs(vector<int>* edge,int start , bool* visited ,int n,unordered_set<int>* component ){
        visited[start] = true;
        component->insert(start);
        for(int i=0;i<edge[start].size();i++){
            if(!visited[edge[start][i]]){
                dfs(edge,edge[start][i],visited,n,component);
            }
        }
    }
    unordered_set<unordered_set<int> * >*  getcomponents(vector<int>* edge,int n){
        bool* visited = new bool[n];
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        unordered_set<unordered_set<int> * >* output = new unordered_set<unordered_set<int> * >();
        for(int i=0;i<n;i++){
            if(!visited[i]){
                unordered_set<int>* sub = new unordered_set<int>();
                dfs(edge ,i, visited,n,sub);
                output->insert(sub);
            }
        }
        delete [] visited;
        return output;
    }
    int main(void){
        int n,e;    
        cin>>n>>e;
        vector<int>* edge = new vector<int>[n];
        for(int i=0;i<e;i++){
            int s,f;
            cin>>s>>f;
            edge[s].push_back(f);
            edge[f].push_back(s);
        }
        unordered_set<unordered_set<int>*>* output = getcomponents(edge,n); // this is similar to dynamic 2d array int** ar = getmin();
        unordered_set<unordered_set<int>*>::iterator it1 = output->begin();
        for(;it1!=output->end();it1++){
            unordered_set<int>::iterator it2 = (*it1)->begin();
            for(;it2!=(*it1)->end();it2++){
                cout<<(*it2)<< " ";
            }
            cout<<endl;
        }
    }