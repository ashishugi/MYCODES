#include<bits/stdc++.h>
using namespace std;
int getans(int n,int ar[3],int size,int** dp){
    if(n==0){
        return 0;
    }
    if(n<0 || size<=0){
        return INT_MAX-20;
    }
    if(dp[n][size]!=-1){
        return dp[n][size];
    }
    dp[n][size]=min(1+getans(n-ar[0],ar,size,dp) , getans(n,ar+1,size-1,dp));
    return dp[n][size];
}
int countprime(int n){
    int count =0 ;
    for(int i=2;i<n;i++){
        bool flag=true;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                flag=false;
                break;
            }
        }
        if(flag){
            count++;
        }
    }
    return count+1;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = countprime(n);
        cout<<ans<<endl; 
    }    
    return 0;
}