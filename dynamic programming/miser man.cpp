#include <bits/stdc++.h>
using namespace std;
int solve(int **price ,int m,int n,int i,int j,int **dp){
    
    if(j<0 || j==m){
        return INT_MAX;
    }
    if(i==n){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int option1=price[i][j]+min(solve(price , m,n,i+1,j,dp),min(solve(price,m,n,i+1,j+1,dp),solve(price,m,n,i+1,j-1,dp)));
    dp[i][j] = option1;
    return option1;
}
int main(){
    int n,m;
    cin>>n>>m;
    int **price = new int*[n+1];
    for(int i=0;i<n;i++){
        price[i] = new int[m+1];
        for(int j=0;j<m;j++){
            cin>>price[i][j];
        }
    }
    int ans = INT_MAX;
    int **dp = new int*[n+1];
    for(int i=0;i<=n;i++){
       dp[i] = new int[m+1];
    }
    for(int i=0;i<m;i++){
        for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j] = -1;
        }
    }
    int sol = solve(price , m, n ,0 ,i ,dp);
     if(sol < ans){
         ans = sol;
     }
    }
       cout<<ans<<endl;
    return 0;
}
