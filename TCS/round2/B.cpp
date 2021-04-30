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
// ll getAns(int n){
//     vector<ll> dp(n+1,0);
//     dp[0]=1;
//     dp[1] = 2;
//     dp[2]=2;
//     for(int i=3;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
//     }
//     return dp[n];
// }
ll getAns(int n,ll* dp){
    if(n <0){
        return 0;
    }
    if( n== 0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    if(n==3){
        return 2;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    ll ans = getAns(n-1,dp)+getAns(n-2,dp)+getAns(n-3,dp);
    dp[n] = ans;
    return ans;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n++;
        ll* dp = new ll[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        ll res = getAns(n,dp);
        cout<<res<<endl;
    }
    return 0;
}