#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dp[72];
int stair(int n){
    if(n==0){
        return  1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    ll answer = stair(n-1)+stair(n-2)+stair(n-3);
    dp[n] = answer;
    return answer;
}
ll stair_iterative(int n){
    ll *output = new ll[n+1];
    output[0]=1;
    output[1]=1;
    output[2]=2;
    for(int i=3;i<=n;i++){
        ll add = output[i-1]+output[i-2]+output[i-3];
        output[i] = output[i]+add;
    }
    ll  answer = output[n];
    delete [] output;
    return answer;
}
int main(void){
    int n;
    cin>>n;
    ll result = stair_iterative(n);
    cout<<result<<endl;
}