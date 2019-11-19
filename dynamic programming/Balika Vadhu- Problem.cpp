#include <bits/stdc++.h>
using namespace std;

int maxlcs(string s1,string s2,int m,int n ,int k ,int dp[][101][101]){
    if(m==0 || n==0){
        if(k>0){
            return INT_MIN;
        }
        return 0;
    }
    if(k<=0){
        return 0;
    }
    if(dp[m][n][k]!=-1){
        return dp[m][n][k];
    }
    int ans=0;
    if(s1[0]==s2[0]){
       ans =max((s1[0])+maxlcs(s1.substr(1),s2.substr(1),m-1,n-1,k-1,dp) ,max(maxlcs(s1.substr(1),s2,m-1,n,k,dp),maxlcs(s1,s2.substr(1),m,n-1,k,dp)));
    }
    else{
        ans = max(maxlcs(s1.substr(1),s2,m-1,n,k,dp),maxlcs(s1,s2.substr(1),m,n-1,k,dp));
       
    }
    dp[m][n][k] = ans;
    return ans;
}
int main(){
    int t;
    int dp[101][101][101];
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int k;
        cin>>k;
        memset(dp,-1,sizeof(dp));
        int sol =   maxlcs(s1,s2,s1.length(),s2.length(),k ,dp);
        if(sol<0){
            sol =0;
        }
        cout<<sol<<endl;
    }
 
    return 0;
}
