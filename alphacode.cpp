#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int dp[5003];
int ncode(string ar,int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    if(dp[n]>0){
        return dp[n];
    }
    int ans = ncode(ar,n-1);
    if(( ar[n-2] == '2' && ar[n-1] < '7' ) || ( ar[n-2] == '1' && ar[n-1] <='9' )){
        ans+=ncode(ar,n-2);
    }
    dp[n] = ans;
    return ans;
}
int main(void){
    string str;
    do{
        cin>>str;
        if(str!="0"){
            int ans = ncode(str , str.length());
            cout<<ans<<endl;
        } 

    }while(str!="0");
    
 

}
// (ar[i-2]=='1' || ar[i-2]=='2' && ar[i-1]<'7')