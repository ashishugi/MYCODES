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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
ll getres(ll n,ll r){
    ll sum = 0;
    ll val=0;
    if(n > r){
        val = r;
    }else if(n<=r){
        val = n-1;
        sum+=1;
    }
    sum += (val*(val+1))/2;
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,r;
        cin>>n>>r;
        ll res = getres(n,r);
        cout<<res<<endl;
    }
    return 0;
}