#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getProduct(int n){
    if(n==0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 3;
    }
    int ans = INT_MIN;
    for(int i =1 ;i<(n);i++){
        ans = max( ans , i*getProduct(n-i) );
    }
    cout<<ans<< " ";
    return ans;
}
int getProduct2(int n){
    int* dp = new int[n+1];
    memset(dp,0,sizeof(dp));
    dp[1] =1;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            dp[i] = max(j*(i-j) ,max(j*dp[i-j]  , dp[i]));
        }
    }
    loop(i,0,n+1){
        cout<<dp[i]<< " ";
    }
    cout<<" \n";
    return *max_element(dp,dp+n+1);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans = getProduct2(n);
    cout<< " output is as : \n";
    cout<<ans<<endl;
     return 0;
}