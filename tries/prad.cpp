#include<bits/stdc++.h>
using namespace std;
class trie{
    public:
    trie** children;
    trie(){
        children=new trie*[26];
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }
};
void insert(trie* root,string str){
    if(str.empty()){
        return;
    }
    int index = str[0] - 'a';
    trie* temp;
    if(root->children[index]){
        temp = new trie(); 
    }else{
        temp = new trie();
        root->children[index] = temp;
    }
    insert(temp , str.substr(1));
}
void dfs(trie* start,string str){
    if(start==NULL){
        return;
    }
    for(int i=0;i<26;i++ ){
        trie* child = start->children[i];
        if(child){
            dfs(child,str+(char)i);
             cout<<str<<endl;
        }
    }
   
}
void query(trie *root,string str){
    trie* curr = root;
    trie* passing;
    string final_string="";
    if(str==" "){
        cout<<"No suggestion"<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
         int index = str[i]-'a';
         trie* child = curr->children[index];
        if(!(child)){
            dfs(passing,str);
            break;
        }
        passing=child;
        curr=child;
    }
}
int main(void){
    int n;
    cin>>n;
    trie* root = new trie();
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        insert(root , str);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string s;
        cin>>s;
        query(root,s);
        cout<<endl;
    }
}