#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long ll;
#define mod 1000000007
using namespace std;
// int getminpaths(int** mat,int row,int col,int i,int j){
//     if(i == row-1 && j == col-1){
//         return 1;
//     }
//     if(i>=row || j >=col){
//         return 0;
//     }
//     if(mat[i][j]==-1){
//         return 0;
//     }
//     int ans1 =  getminpaths(mat,row,col,i+1,j);
//     int ans2 = getminpaths(mat,row,col,i,j+1);
//     return (ans1%mod+ans2%mod)%mod;
// }
int getminpaths(int** mat,int row,int col){
    int** dp = new int*[row+1];
    if(mat[row-1][col-1]==-1){
        return 0;
    }
    loop(i,0,row){
        dp[i] = new int[col+1];
        loop(j,0,col){
            dp[i][j] =0;
        }
    }
    dp[row-1][col-1] =0;
    for(int i = row-2;i>=0;i--){
        if(mat[i][col-1]!=-1){
            dp[i][col-1] = 1;
        }else{
            while(i>=0){
                
                dp[i][col-1] = 0;
                i--;
            }
        }
    }
    for(int i = col-2;i>=0;i--){
        if(mat[row-1][i]!=-1){
            dp[row-1][i] = 1;
        }else{
            while(i>=0){
                dp[row-1][i] = 0;
                i--;
            }
        }
    }
    for(int i=row-2;i>=0;i--){
        for(int j=col-2;j>=0;j--){
            if(mat[i+1][j]!=-1 && mat[i][j+1]!=-1){
                dp[i][j] = dp[i+1][j]+dp[i][j+1];
            }else{
                if(mat[i+1][j]== -1 && mat[i][j+1]==-1 ){
                    dp[i][j] =0;
                }
                else if(mat[i+1][j]==-1){
                    dp[i][j] = dp[i][j+1];
                }else{
                    dp[i][j] = dp[i+1][j];
                }
            }
        }
    }
    // loop(i,0,row){
    //     loop(j,0,col){
    //         cout<<dp[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
    return dp[0][0];
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int** mat = new int*[n];
        loop(i,0,n){
            mat[i] = new int[m];
            loop(j,0,m){
                mat[i][j]=0;
            }
        }
        loop(i,0,k){
            int row , col;
            cin>>row>>col;
            mat[(row-1)][(col-1)] = -1;
        }
        int ans = getminpaths(mat,n,m);
        cout<<ans<<endl;
    }
    return 0;
}