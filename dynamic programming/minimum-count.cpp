#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int minimum(int n , int *dp  ,int size){
    if( n ==0){
      return 1;
    }
    if(n<0){
      return INT_MAX;
    }
    if(size <= 0){
      return INT_MAX;
    }
    int ans1=0 , ans2=0;
   
   for(int i=1;i<n;i++){
      ans1 =ans1+ minimum(n - dp[i] ,dp ,size);
      ans2 =ans2+ minimum(n , dp+1, size-1);
 
   }
    return min(ans1,ans2);
}
int main(void){
    int n;
    cin>>n;
    int *dp = new int[n+5];
    for(int i=0;i<=n;i++){
      dp[i] = i*i;
    }
    int count = minimum(n , dp , n);
    cout<<count<<endl;
    return 0;
}