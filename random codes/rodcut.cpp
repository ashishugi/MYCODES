    

#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
int getcut(int* price,int n,int len){          //// recursive way
    if(len == 0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    if(len < 0){
        return INT_MIN;
    }
    int ans = INT_MIN+20;
    for(int i=0;i<n;i++){
        ans = max(ans ,price[i]+getcut(price,n,len-(i+1)));
    }
    return ans;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* price = new int[n];
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
        int* dp =  new int[n+1];
        loop(i,n+1){
            dp[i]=0;
        }
        dp[0]=0;
        loop(i,n+1){   /// iterative way
            int val=0;
            loop(j,i){
                val=max(val,price[j]+dp[i-(j+1)]);
            }
            dp[i]=val;
        }
        // loop(i,n+1){
        //     cout<<dp[i]<< " ";
        // }
        // cout<<endl;
        int final_val = *max_element(dp,dp+(n+1));
        cout<<final_val<<endl;
      
    }
    
    return 0;
}