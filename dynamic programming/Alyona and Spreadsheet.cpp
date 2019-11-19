#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row , col;
    cin>>row>>col;
    int **ar = new int*[row];
    for(int i=0;i<row;i++){
         ar[i] = new int[col];
        for(int j=0;j<col;j++){
            cin>>ar[i][j];
        }
    }
    int dp[row+1][col+1];
    for(int i=0;i<col;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<row;i++){
        for(int j=0;j<col;j++){
            if(ar[i-1][j] <= ar[i][j]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = i;
            }
        }
    }
   
    int q;
    cin>>q;
    
    while(q--){
        int row1,row2;
        int flag=0;
        cin>>row1>>row2;
        row1=row1-1;
        row2=row2-1;
        for(int i=0;i<col;i++){
            if(dp[row2][i] <= row1){
                flag=1;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"No"<<endl;
        }
        
    } // end of while
    return 0;
}
