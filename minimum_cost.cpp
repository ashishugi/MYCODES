#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int minimum(int **ar ,int si ,int sj ,int ei ,int ej){
    if(si == ei && sj==ej){
        return ar[si][sj];
    }
    if(dp[si][sj] > 0){
        return dp[si][sj];
    }
    if(si < ei+1 && sj<ej+1){
       int  answer1 = minimum(ar , si , sj+1 , ei , ej );
        int  answer2 = minimum(ar , si+1 , sj+1 , ei , ej );
        int  answer3 = minimum(ar , si+1 , sj , ei , ej );
       //   cout<<si << " " << sj<<" and "<<ar[si][sj]+min(answer1 , min(answer2 , answer3))<<endl;
       dp[si][sj] = ar[si][sj] + min(answer1 , min(answer2 , answer3));
         return dp[si][sj];
    }
    else{
        return INT_MAX;
    }
   
    
}
int minimum_iterative_dp(int **ar , int ei , int ej){
    int output[ei+1][ej+1];
    output[ei][ej] = ar[ei][ej];
    for(int i=ej-1;i>=0;--i){ // filling the row
       output[ei][i] = ar[ei][i] +output[ei][i+1];
       //cout<<output[ei][i]<< " and "<<output[ei][i+1]<<endl;
    }
    for(int i=ei-1;i>=0;--i){
       output[i][ej] = ar[i][ei] + output[i+1][ej];
    }
    for(int i=ei-1;i>=0;--i){
        for(int j=ej-1;j>=0;--j){
            output[i][j]=ar[i][j] + min(output[i+1][j] , min(output[i][j+1],output[i+1][j+1]));
         //   cout<<output[ei][i]<< " and "<<output[ei][i+1]<<" and "<<output[] <<endl;
        }
    }
   return output[0][0];
}
int main(void){
    int n; 
    cin>>n;
    int **ar = new int*[n];
    for(int i=0;i<n;i++){
        ar[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    } 
   int cost = minimum(ar,0,0,n-1,n-1);
   cout<<"the minimum cost would be through recursive "<<cost<<endl;
  int ans =  minimum_iterative_dp(ar,n-1,n-1);
  cout<<"the minimum cost would be through iterative one  "<<ans<<endl;

}