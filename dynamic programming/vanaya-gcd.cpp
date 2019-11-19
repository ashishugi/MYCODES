#include<bits/stdc++.h>
long long m = 1000000007;
using namespace std;
int sub(int *ar , int n){
    int **dp=new int*[n+1];
    for(int i=0;i<n;i++){
        dp[i] = new int[101];
        for(int j=0;j<=100;j++){
            dp[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        dp[i][ar[i]] =1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;++j){
            
            if(ar[j]  < ar[i] ){
                
                for(int k=1;k<=100;k++){
                   int newgcd = __gcd(ar[i] , k);
                    dp[i][newgcd]+=dp[j][k];   // dp[i][newgcd]+=dp[j][k]
                    dp[i][newgcd] %= m;
                }
               
            }
        }
    }
   
    long long sum=0;
        for(int i=0;i<n;i++){
           sum=(sum%m + (dp[i][1])%m)%m;
    }
    return sum;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin >>ar[i];
    }
    int num = sub(ar  ,n);
    cout<<num<<endl;
}