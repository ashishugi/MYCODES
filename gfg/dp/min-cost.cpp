#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getmin(int* cost,int n,int W){

}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        int* cost = new int[n];
        for(int i=0;i<n;i++){
          cin>>cost[i];
        }
        int** dp = new int*[n+1];
        for(int i=0;i<=n;i++){
          dp[i] = new int[W+1];
          for(int j=0;j<=W;j++){
            dp[i][j]=INT_MAX-20;
          }
        }
        for(int i=0;i<=W;i++){
          dp[0][i] = 0;
        }
        for(int i=0;i<=n;i++){
          dp[i][0] = 0;
        }
        for(int i=1;i<=n;i++){
          if(cost[i-1]==-1){
            continue;
          }else{
            for(int j=0;j<=W;j++){
              if(i <= j){
                dp[i][j] = min(dp[i-1][j] ,cost[i-1]+dp[i -1][j - i]); /// please note that dp[i-1 ][j] - > tell if we donot take curr item
              }                                               /// and dp[i-1][j - i]  tells - >if we take the current item and get the optimal soln
            }
          }
        }
        cout<<dp[n][W]<<endl;
        for(int i=0;i<=n;i++){
          for(int j=0;j<=W;j++){
            cout<<dp[i][j]<< " ";
          }
          cout<<endl;
        }
        
    }
  return 0;
}