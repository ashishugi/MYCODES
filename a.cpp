#include<bits/stdc++.h>
#include<vector>
using namespace std;
int lcs(string s,string p,vector<char>& v){
    if(s.empty() || p.empty()){
        return 0;
    }
    if(s[0] == p[0]){
        v.push_back(s[0]);
        return 1+lcs(s.substr(1),p.substr(1),v);
    }
    else{
        return max(lcs(s.substr(1),p,v) , lcs(s,p.substr(1),v));
    }
}
int main(void){
    string s,p;
    cin>>s>>p;
    vector<char> v;
    cout<<lcs(s,p,v)<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}