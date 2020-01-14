#include<bits/stdc++.h>
using namespace std;
class trie{
    public:
    trie** children;
    int weight;
    trie(){
        children = new trie*[26];
        for(int i=0;i<26;i++){
            children[i] =  NULL;            
        }
        weight = 0;
    }
};
void insert(string s,int weight,trie* root){
    if(s.empty()){
        return;
    }
    trie* child;
    int index = s[0] - 'a';
    if(root->children[index]){
        child = root->children[index];
    }else{
        child = new trie();
        root->children[index] = child;
    }
    if(root->weight < weight){
        root->weight  = weight;
    }
    insert(s.substr(1) , weight,child);
}
int search(string s,trie* root){
    trie* curr = root;
    int wt=0;
    for(int i=0;i<s.length();i++){
        int index = s[i] - 'a';
        trie* child = curr->children[index];
        if(child){
            curr = child;
            wt= child->weight;
        }else{
            return -1;
        }
    }
    return wt;
}
int main(void){
    int n,q;
    cin>>n>>q;
    trie* root = new trie();
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int wt;
        cin>>wt;
        insert(s,wt,root);
    }
    for(int i=0;i<q;i++){
        string s;
        cin>>s;
        cout<<search(s,root)<<endl;
    }
}