#include<iostream>
#include<cstring>
using namespace std;
int dp[23][23];
int solve(string s1,string s2,int m,int n){
    if(m==0){
        return s2.length();
    }
    if(n==0){
        return s1.length();
    }
    if(dp[m][n]>0){
        return dp[m][n];
    }
    int ans =0;
    if(s1[0]==s2[0]){
        ans =  solve(s1.substr(1),s2.substr(1),m-1,n-1);
    }
    else{
       ans =  min( 1+solve(s1.substr(1),s2.substr(1),m-1,n-1) , min(1+solve(s1.substr(1),s2,m-1,n) , 1+solve(s1,s2.substr(1),m,n-1)));
    }
    dp[m][n] = ans;
    return dp[m][n];
    
}
int editDistance(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    
    int ans = solve(s1,s2,m,n);
    
    return ans;
}

#include "Solution.h"

int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << editDistance(s1,s2) << endl;

}
/* recursive way */

// int solve(string s1,string s2,int m,int n){
//     if(m==0){
//         return s2.length();
//     }
//     if(n==0){
//         return s1.length();
//     }
//     if(s1[0]==s2[0]){
//         return solve(s1.substr(1),s2.substr(1),m-1,n-1);
//     }
//     else{
//       int ans =  min( 1+solve(s1.substr(1),s2.substr(1),m-1,n-1) , min(1+solve(s1.substr(1),s2,m-1,n) , 1+solve(s1,s2.substr(1),m,n-1)));
//     return ans;
//     }
    
// }