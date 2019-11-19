#include<bits/stdc++.h>
using namespace std;
int knapsack(int* wt, int* val, int n, int W){
    int **dp = new int*[2];
    for(int i=0;i<=1;i++){
        dp[i] = new int[W+1];
    }
    for(int i=0;i<=W;i++){
        dp[0][i] = 0;
    }
     for(int i=0;i<=1;i++){
        dp[i][0] = 0;
    }
    int flag=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            dp[flag][j] = dp[flag^1][j];
            if(wt[i-1] <=j){
                dp[flag][j] = max(dp[flag][j] , val[i-1]+dp[flag^1][j-wt[i-1]]);
            }
        }
        flag = flag^1;
    }
    
    return dp[flag^1][W];
    
  
}
int main(){

  int n; 
  cin >> n;
  int* weights = new int[n];
  int* values = new int[n];

  for(int i = 0; i < n; i++){
    cin >> weights[i];
  }

  for(int i = 0; i < n; i++){
    cin >> values[i];
  }

  int maxWeight;
  cin >> maxWeight;

  cout << knapsack(weights, values, n, maxWeight);

}
