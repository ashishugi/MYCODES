#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getval(int n,int* dp){
    if(n==1 || n==0){
        dp[n]=-1;
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int a = getval(n-1,dp);
    int b = getval(n-2,dp);
    dp[n] = a+b;
    return dp[n];
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* dp = new int[n+1];
    loop(i,0,n+1){
        dp[i]=-1;
    }
    cout<<getval(n,dp)<<endl;
    loop(i,0,n+1){
        cout<<dp[i]<< " ";
    }
    return 0;
}