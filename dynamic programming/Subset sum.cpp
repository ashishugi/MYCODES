#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int solve(int *ar ,  int n,int k){
    if(n==0){
        if(k==0){
            return 1;
        }
        return 0;
    }
    if(dp[n][k]!=-1){
        return dp[n][k];
    }
    if(k==0){
        return 1;
    }
    int ans1,ans2;
    if(k-ar[0] >= 0){
        ans1 = solve(ar+1,n-1,k-ar[0]);
        ans2 = solve(ar+1,n-1,k);
    }
    else{
      return solve(ar+1 , n-1,k);
    }
    dp[n][k] = (ans1||ans2);
    return (ans1||ans2);
}
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;
    memset(dp,-1,sizeof(dp));
    int answer = solve(ar,n,k);
    if(answer){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
