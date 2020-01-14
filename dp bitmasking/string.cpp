#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m=1000000000+7;
int solver(string a,string b,string c,int x,int y,int z,int*** dp){
  if(z>=c.length()){
    return 1;
  }
  if(x>=a.length() && y>=b.length()){
    return 0;
  }
if(dp[x][y][z]!=-1){
    return dp[x][y][z];
}
  ll count=0;
  int ans1=0,ans2=0;
  for(int i=x;i<a.length();i++){
      if(a[i]==c[z]){
          ans1=((ans1)%m+(solver(a,b,c,i+1,y,z+1,dp))%m)%m;
      }
  }
    for(int i=y;i<b.length();i++){
       if(b[i]==c[z]){
          ans1=((ans1)%m+(solver(a,b,c,x,i+1,z+1,dp))%m)%m;
      }
    }
    dp[x][y][z]=(ans1)%m;
  return (ans1);
}

int solve(string a,string b,string c){
    int*** dp=new int**[a.length()+1];
    for(int i=0;i<=a.length();i++){
        dp[i] = new int*[b.length()+1];
        for(int j=0;j<b.length()+1;j++){
            dp[i][j]=new int[c.length()+1];
            for(int k=0;k<c.length()+1;k++){
                dp[i][j][k]=-1;
            }
        }
    }
  int sol= solver(a,b,c,0,0,0,dp);
  return sol;
}
