#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll z = 1000000007;
ll dp[1001][1001][2];
ll fun(int n , int k , int first){
    if(n == 1){
        if(k==0){
            return 1;
        }
        return 0;
    }
    if(k<0){
        return 0;
    }
    if(dp[n][k][first]!=-1){
        return dp[n][k][first];
    }
    ll res1=0,res2=0;
    if(first == 1){
    res1 = (fun(n-1,k-1 , 1)%z + fun(n-1,k,0)%z)%z;
    }
    if(first == 0){
       res2 = (fun(n-1,k , 1)%z + fun(n-1,k,0)%z)%z;
    }
    ll ans = ((res1)%z + (res2)%z)%z;
    dp[n][k][first] = ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
       
        int temp;
        cin>>temp;
        int m , k;
        cin>>m>>k;
        memset(dp , -1 ,sizeof(dp));
        ll  res1 = fun(m , k ,1);
        ll res2 = fun(m,k,0);
        ll ans = (res1%z+res2%z)%z;
        cout<<temp<< " "<<ans<<endl;
    }
    return 0;
}
