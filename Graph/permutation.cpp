#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
using namespace std;
void getcomponent(vector<int>* edge,int start ,bool* visited,int n,unordered_set<int>* sub){
    visited[start] = true;
    sub->insert(start);
    for(int i=0;i<edge[start].size();i++){
        if(!visited[edge[start][i]]){
            getcomponent(edge,edge[start][i],visited ,n,sub);
        }
        
    }
}
unordered_set<unordered_set<int> *>* get(vector<int>* edge ,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    
    unordered_set<unordered_set<int> *>* result = new unordered_set<unordered_set<int> *>();
    for(int i=0;i<n;i++){
        if(!visited[i]){
            unordered_set<int>* sub = new unordered_set<int>();
            getcomponent(edge,i,visited,n ,sub);
            result->insert(sub);
            
        }
    }
    return result;
}
int main(void){
    int t;
    cin>>t;
   while(t--){
        int n,e;
        cin>>n>>e;
        int* p = new int[n];
        int* q = new int[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        vector<int>* edge = new vector<int>[n];
        for(int i=0;i<e;i++){
            int s,f;
            cin>>s>>f;
            edge[s-1].push_back(f-1);
            edge[f-1].push_back(s-1);
        }
     //  set<int> fp ,fq;
        unordered_set<unordered_set<int> *>* component = get(edge , n);
          int flag=0;
    unordered_set<unordered_set<int> *>::iterator it1 = component->begin();
    for(;it1!=component->end();it1++){
        
        unordered_set<int>::iterator it2 = (*it1)->begin();
        unordered_set<int>::iterator it3 = (*it1)->begin();
        unordered_set<int> fp;
        for(;it2!=(*it1)->end();it2++){
            fp.insert(p[*it2]);
            
        }// set<int>::iterator it = fp.begin();
        while(it3!=(*it1)->end()){
            if(fp.find(q[*it3])==fp.end()){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            it3++;
        } 
        if(flag==1)
            break;
      }
        if(flag==0){
        cout<<"YES"<<endl;
        }
   } // end of while loop
 
    
    
}


/*   #include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
using namespace std;
void getcomponent(vector<int>* edge,int start ,bool* visited,int n,unordered_set<int>* sub){
    visited[start] = true;
    sub->insert(start);
    for(int i=0;i<edge[start].size();i++){
        if(!visited[edge[start][i]]){
            getcomponent(edge,edge[start][i],visited ,n,sub);
        }
        
    }
}
unordered_set<unordered_set<int> *>* get(vector<int>* edge ,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    
    unordered_set<unordered_set<int> *>* result = new unordered_set<unordered_set<int> *>();
    for(int i=0;i<n;i++){
        if(!visited[i]){
            unordered_set<int>* sub = new unordered_set<int>();
            getcomponent(edge,i,visited,n ,sub);
            result->insert(sub);
            
        }
    }
    return result;
}
int main(void){
    int t;
    cin>>t;
   while(t--){
        int n,e;
        cin>>n>>e;
        int* p = new int[n];
        int* q = new int[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        vector<int>* edge = new vector<int>[n];
        for(int i=0;i<e;i++){
            int s,f;
            cin>>s>>f;
            edge[s-1].push_back(f-1);
            edge[f-1].push_back(s-1);
        }
      
        unordered_set<unordered_set<int> *>* component = get(edge , n);
          int flag=0;
    unordered_set<unordered_set<int> *>::iterator it1 = component->begin();
    for(;it1!=component->end();it1++){
        unordered_set<int>::iterator it2 = (*it1)->begin();
        flag=0;
         set<int> fp ,fq;
        for(;it2!=(*it1)->end();it2++){
            fp.insert(p[*it2]);
            fq.insert(q[*it2]);
            
        } set<int>::iterator it = fp.begin();
         for(int i=0;i<fq.size();i++){
             if(fq.find(*it)==fq.end()){
                 flag=1;
                 break;
             }
             it++;
         }
        if(flag==1){
            break;
        }
        
      }
        if(flag==1){
        cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
   } // end of while loop
 
    
    
} */