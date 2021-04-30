#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll m = (1000000000+7);
ll dp[45];
ll bt(int h){
    if(h==0  || h==1){
        dp[0]=1;
        dp[1]=1;
        return 1;

    }
    if(dp[h]!=0){
    return dp[h];
    }
    ll res = (((bt(h-1)%m)*(bt(h-1)%m))%m + 2*((bt(h-1)%m)*(bt(h-2)%m))%m)%m;
    dp[h] = res;
    return res;
}

int main(void){
    int n;
    cin>>n;
    ll ans = bt(n);
    cout<<ans<<endl;
}
