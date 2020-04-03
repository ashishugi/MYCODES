#include<bits/stdc++.h>
#include<vector>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getmax(vector<int>& a ,int i ,vector<int>& b,int j,int** dp){
    int l1 = a.size();
    int l2 = b.size();
   int** dp = new int*[l1+1];
   for(int i=0;i<=l1;i++){
       dp[i] = new int[l2+1];
       for(int j=0;j<=l2;j++){
           dp[i][j] =0 ;
       }
   }
   for(int i=1;i<=l1;i++){
       for(int j=1;j<=l2;j++){
           if(a[i-1] == b[j-1]){
               dp[i][j] = 1+dp[i-1][j-1];
           }else{
               dp[i][j] =0;
           }
       }
   }
    int maximum=0;
    for(int i=0;i<=l1;i++){
       for(int j=0;j<=l2;j++){
          if(maximum < dp[i][j]){
              maximum = dp[i][j];
          }
       }
   }
    return maximum;
}
int main(void){
    int n,m;
    cin>>n>>m;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        B.push_back(temp);
    }
    int maxlen = getmax(A,0,B, 0,dp);
    cout<<maxlen<<endl;
  return 0;
}