#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int dp[100][100];
ll health(int **ar , int si ,int sj ,int row , int col){
  if(si == row-1 && sj==col-1){
      return 1;
  }
  if(si < row && sj <col){
       int ans1 =INT_MAX,ans2=INT_MAX;
      if(si+1<row){
      ans1= health(ar , si+1 ,sj ,row,col) - ar[si][sj];
      }
      if(sj+1<col){
      ans2 = health(ar  , si,sj+1 , row,col) - ar[si][sj];
      }
      ll res =  min(ans1,ans2);
      if(res < 1){
          dp[si][sj] = res;
          return 1;
      }
      else{
          dp[si][sj] = res;
          return res;
      }

  }
  else{
      return  INT_MAX-20;
  }
 
}
int health_iterative(int **ar , int ei , int ej){
    int output[ei+1][ej+1];
    for(int i=0;i<=ei;i++){
        for(int j=0;j<=ej;j++){
            output[i][j] = 0;
        }
    }
    output[0][0] = 0;
    output[ei-1][ej-1] = 1;
    for(int i=ei-2;i>=0;i--){ // for the row
        output[i][ej-1] = output[i+1][ej-1] - (ar[i][ej-1]);
    }
  //  cout<<"reached 1"<<endl;
    for(int i=ej-2;i>=0;i--){ // for the col
        output[ei-1][i] = output[ei-1][i+1] - (ar[ei-1][i]);
    }
    // cout<<"reached 2"<<endl;
    for(int i = ei-2;i>=0;i--){
        for(int j=ej-2;j>=0;--j){
            int num = min(output[i+1][j] , output[i][j+1]);
            int res = num - (ar[i][j]);
            if(res <1){
                res = 1;
            }
            output[i][j] = res;
        }
    }
     //cout<<"reached 3"<<endl;
    return output[0][0];
}
int main(void){
    int row , col;
    int t;
    cin >> t;
    while(t--){
        int row , col;
        cin>>row;
        cin>>col;
        int **s = new int*[row];
        for(int i=0;i<row;i++){
            s[i] = new int[col];
            for(int j=0;j<col;j++){
                cin>>s[i][j];
            }
        } // end of outer for loop
        //int  ans = health(s ,0,0, row , col);
        int ans = health_iterative(s,row,col);
        cout<<ans<<endl;
    }// end of while
}