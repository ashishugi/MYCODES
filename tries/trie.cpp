#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
class trie{
    public:
    trie *children[26];
    trie(){
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }
};
void insert(string s,trie* root){
    if(s.length() == 0){
        return;
    }
    trie* child = new trie();
    int index = s[0]-'a';
   if(root->children[index]!=NULL){
       child = root->children[index];
   }else{
      child = new trie();
      root->children[index] = child;
   }
   insert(s.substr(1),child);
}
bool search(string s,trie* root){
    trie* child =root;
    for(int i=0;i<s.length();i++){
        int index = s[i]-'a';
        child = child->children[index];
        if(child){
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    trie* root = new trie();
    while(t--){
        string s;
        cin>>s;
        insert(s,root);
        cout<<"Inserted"<<endl;
        string q;
        cin>>q;
        cout<<"the item existence status : "<<search(q,root)<<endl;
    }
    return 0;
}