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
ll getAns(int n,vector<ll>& ar,ll d,ll k){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum += ar[i];
    }
    ll res = sum/k;
    if(res > d){
        res = d;
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll k;
        cin>>k;
        ll d;
        cin>>d;
        vector<ll> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        ll res = getAns(n,ar,d,k);
        cout<<res<<endl;
    }
    return 0;
}