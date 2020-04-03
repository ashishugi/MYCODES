#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int get(int n,int* take,int* dp,int size){
    if(n==0){
        return 0;
    }
    if(n<0 || size==0){
        return INT_MIN+20;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans =0;
    ans = 1+max(get(n-take[0],take,dp,size),get(n-take[1],take+1,dp,size-1) );
    dp[n]=ans;
    return ans;
}
int main(void){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int* dp = new int[n+1];
    loop(i,0,n+1){
        dp[i] = -1;
    }
    int* take = new int[3];
    take[0]=a;
    take[1]=b;
    take[2]=c;
    cout<<get(n,take,dp,3)<<endl;
  return 0;
}