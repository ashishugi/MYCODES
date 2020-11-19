#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int getans(int d,int f,int sum,int index,int target,int** dp){
     if(sum == target && (index == d)){
        return 1;
    }
    if(index>=d){
        return 0;
    }
    if(sum > target){
        return 0;
    }
    if(dp[index][sum]!=-1){
        return dp[index][sum];
    }
    int ans = 0;
    for(int j=1;j<=f;j++){
        dp[index][sum] = (ans%mod+getans(d,f,sum+j,index+1,target,dp)%mod)%mod;
        ans = dp[index][sum];
    }
    return ans;
}
int main(void){
    int d;
    int f;
    cin>>d>>f;
    int target;
    cin>>target;
    int** dp = new int*[d+1];
    for(int i=0;i<=d;i++){
        dp[i] = new int[target+1];
        for(int j=0;j<=target;j++){
            dp[i][j]=-1;
        }
    }
    int res = getans(d,f,0,0,target,dp);
    cout<<res<<endl;
    return 0;
}