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
string getAns(string s,int l,int r){
    char st = s[l];
    char end = s[r];
    for(int i=l-1;i>=0;i--){
        if(s[i] == st){
            return "YES";
        }
    }
    for(int i=r+1;i<s.length();i++){
        if(s[i] == end){
            return "YES";
        }
    }
    return "NO";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<pair<int,int>> range;
        for(int i=0;i<q;i++){
            int l;
            int r;
            cin>>l>>r;
            string res = getAns(s,l-1,r-1);
            cout<<res<<endl;
        }
    }
    return 0;
}