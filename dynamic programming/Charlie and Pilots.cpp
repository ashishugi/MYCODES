#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int *cap ,int *at ,int n,int count,int **dp){
    if(n==0){
        return 0;
    }
    if(dp[n][count]!=-1){
        return dp[n][count];
    }
    if(count == 0){
        return at[0]+solve(cap+1 , at+1 , n-1 , 1,dp);
    }
    if(count == n){
        return cap[0]+solve(cap+1,at+1,n-1 , count-1,dp);
    }
    else{
        int ans1 = at[0]+solve(cap+1,at+1,n-1,count+1,dp);
        int ans2 = cap[0]+solve(cap+1,at+1,n-1,count-1,dp);
        dp[n][count] = min(ans1,ans2);
        return min(ans1,ans2);
    }
}
int main(){
    int n;
    cin>>n;
    int *cap = new int[n];
    int *at = new int[n];
    for(int i=0;i<n;i++){
        cin>>cap[i];
        cin>>at[i];
    }
    int **dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[n+1];
        for(int j=0;j<=n;j++){
            dp[i][j] = -1;
        }
    }
    ll sol = solve(cap , at , n , 0,dp);
    cout<<sol<<endl;
    return 0;
}
