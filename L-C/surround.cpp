#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;

void remove(char** board,int row,int col,int i,int j,int** dp){

    if(i>=row || j>=col || i<0 || j<0){
        return;
    }
    if(board[i][j] != 'O'){
        return;
    }
    if(board[i][j]=='O'){
        dp[i][j] = 1;
        board[i][j]='X';
        remove(board,row,col,i+1,j,dp);
        remove(board,row,col,i-1,j,dp);
        remove(board,row,col,i,j+1,dp);
        remove(board,row,col,i,j-1,dp);
    }
}
void calculate(char** board,int row ,int col,int** dp){
    // for the first row
    for(int i=0;i<col;i++){
        if(board[0][i] == 'O'){
            remove(board,row,col , 0,i,dp);
        }
    }
    // first column
    for(int i=0;i<row;i++){
        if(board[i][0] == 'O'){
            remove(board,row,col, i,0,dp);
        }
    }
    // last col 
    for(int i=0;i<row;i++){
        if(board[i][col-1] == 'O'){
            remove(board,row,col ,i,col-1,dp);
        }
    }
    //  last row
    for(int i=0;i<col;i++){
        if(board[row-1][i] == 'O'){
            remove(board,row,col,row-1 , i,dp);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(dp[i][j]==0){
                board[i][j] = 'X';
            }else{
                board[i][j] = 'O';
            }
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;int m;
    cin>>n>>m;
        char** board = new char*[n];
        int** dp = new int*[n];
        for(int i=0;i<n;i++){
            board[i] = new char[m];
            dp[i] = new int[m];
            for(int j=0;j<m;j++){
                cin>>board[i][j];
                dp[i][j] =0;
            }
        }
        calculate(board , n,m,dp);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<board[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}