#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getAns(vector<vector<int>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,0));
        if(grid[row-1][col-1] == 0){
            dp[row-1][col-1] = 1;
        }else{
            dp[row-1][col-1] = 0;
        }
        for(int i=col-2;i>=0;i--){
            if(grid[row-1][i] == 1){
                dp[row-1][i] = 0;
            }else{
                dp[row-1][i] = dp[row-1][i+1];
            }
        }
        for(int i=row-2;i>=0;i--){
            if(grid[i][col-1] == 1){
                dp[i][col-1] = 0;
            }else{
                dp[i][col-1] = dp[i+1][col-1];
            }
        }
        for(int i=row-2;i>=0;i--){
            for(int j=col-2;j>=0;j--){
                if(grid[i][j] == 1){
                    dp[i][j] =0;
                }else{
                    dp[i][j] = dp[i+1][j]+dp[i][j+1];
                    cout<<(i+1)<<" : "<<j<<" and "<<(i)<< " : "<<(j+1)<<endl;
                }
            }
        }
        //  for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         cout<<dp[i][j]<< " ";
        //     }
        //      cout<<endl;
        // }
        return dp[0][0];
    }
int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int res = getAns(grid);
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int value = uniquePathsWithObstacles(grid);
    return 0;
}