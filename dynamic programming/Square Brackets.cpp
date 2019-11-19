#include <bits/stdc++.h>
using namespace std;
int solve(bool *check,int open ,int close ,int n ,int **dp){
    if(open>n || close>n){
        return 0;
    }
    if(dp[open][close]!=-1){
        return dp[open][close];
    }
    if(open==n && close==n){
        return 1;
    }
    if((open==close) || (check[open+close]==true)){
        return solve(check,open+1,close,n,dp);
    }
    else if(open==n){
        return solve(check , open,close+1,n,dp);
    }
    else{
        int ans = (solve(check,open+1,close,n,dp)+solve(check , open,close+1,n,dp));
        dp[open][close] = ans;
        return ans;
    }
}
int main(){
    int d;
    cin>>d;
    while(d--){
        int n,k;
        cin>>n>>k;
        int *ar = new int[k+1];
        bool *check = new bool[(2*n+1)];
        for(int i=0;i<k;i++){
            cin>>ar[i];
            check[ar[i]-1] = true;
        }
        // for(int i=0;i<n;i++){
        //     cout<<check[i]<< " ";
        // }
        //cout<<endl;
        int **dp = new int*[n+1];
        for(int i=0;i<=n;i++){
            dp[i] = new int[n+1];
            for(int j=0;j<=n;j++){
                dp[i][j] = -1;
            }
        }
       int result = solve(check , 0 , 0 , n ,dp);
       cout<<result<<endl;
    }
    return 0;
}
