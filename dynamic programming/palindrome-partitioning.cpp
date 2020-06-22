#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> res;
void partition(string s,int i,int j,string temp){
    if(i>j){
        return;
    }
    if(i == j){
        temp.push_back(s[i]);
        // cout<<temp<< " ";
        res.push_back(temp);
        return;
    }
    if(s[i]==s[j]){
        partition(s,i+1,j-1,s[i]+temp+s[j]);
        return;
    }
    partition(s,i+1,j,temp);
    partition(s,i,j-1,temp);
}
int main(void){
    string s;
    cin>>s;
    string temp="";
    partition(s,0,s.length()-1,temp);
    for(string x : res){
        cout<<x<<endl;
    }
    return 0;
}