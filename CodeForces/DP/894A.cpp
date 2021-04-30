#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getCount(string s,string target){
    if(target.length() == 0){
        return 1;
    }
    if(s.length() == 0){
        return 0;
    }
    if(s[0] == target[0]){
       return (getCount(s.substr(1) , target.substr(1)) + getCount(s.substr(1) ,target));
    }else{
        return getCount(s.substr(1),target);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int count = getCount(s,"QAQ");
    cout<<count<<endl;
    return 0;
}