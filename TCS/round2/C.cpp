#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef unsigned long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> price(n,0);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int p;
    cin>>p;
    vector<bool> visited(n,false);
    vector<set<ll>> group;
    for(int i=0;i<p;i++){
        ll s;
        ll e;
        cin>>s>>e;
        s--;
        e--;
        bool flag = false;
        int j=0;
        for(;j<(int)group.size();j++){
            if(group[j].find(s)!=group[j].end() || group[j].find(e)!= group[j].end()){
                flag = true;
                break;
            }
        }
        if(flag == true){
            group[j].insert(s);
            group[j].insert(e);
            visited[s]=true;
            visited[e]=true;
        }else{
            set<ll> temp;
            visited[s]=true;
            visited[e]=true;
            temp.insert(s);
            temp.insert(e);
            group.push_back(temp);
        }
    }
    ll res=0;
    for(int i=0;i<(int)group.size();i++){
        ll ans=0;
        for(auto x : group[i]){
            ans += price[x];
        }
        res = max(res,ans);
    }
    for(int i=0;i<(int)visited.size();i++){
        if(visited[i] == false){
            res = max(res,price[i]);
        }
    }
    cout<<res<<endl;
    return 0;
}