#include<bits/stdc++.h>
using namespace std;
int mincost(int cost[][4],int n,int p,int mask , int* dp){
  int minans = INT_MAX-20;
  if(p>=n){
    return  0;
  }
  if(dp[mask]!=INT_MAX){
    return dp[mask];
  }
  for(int i=0;i<n;i++){

    if(!(mask&(1<<i))){
      int ans = mincost(cost,n,p+1,mask|(1<<i),dp) + cost[p][i];
       if(ans < minans){
         minans = ans;
         //cout<<minans<<endl;
       }
    }

  }
  dp[mask] = minans;
  return minans;
}
int main(void){
  int cost[4][4] = {{10,2,6,5},{1,15,12,8},{7,8,9,3},{15,13,4,10}};
  int *dp  =new int[(1<<4)];
  for(int i=0;i<(1<<4);i++){
    dp[i] = INT_MAX;
  }
  cout<<mincost(cost,4,0,0,dp)<<endl;
}
