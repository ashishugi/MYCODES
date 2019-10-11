#include<iostream>
using namespace std;
int board[20][20];
bool possible(int row,int col, int value,int n){
    for(int j=0;j<n;j++){
            if(board[row][j] == value){
                return false;
            }
        }
    for(int j=0;j<n;j++){
            if(board[j][col] == value){
                return false;
            }
        }
       int rowf = row - (row%3);
       int colf = col - (col%3);
       for(int i=rowf;i<rowf+3;i++){
           for(int j=colf;j<colf+3;j++){
               if(board[i][j]==value){
                   return false;
               }
           }
       }
    return true;
}
bool zero(int n, int &row , int &col){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool fill_sudoku(int n){
  int row , col;
  if(!zero(n,row,col)){
      return true;

  }
  for(int i=1;i<=n;i++){
          if(possible(row,col,i,n)){
              board[row][col] = i;
              if(fill_sudoku(n)){
                  return true;
              }
                board[row][col]=0;
          }
    } 
  return false;
}

int main(void){
   // cout<<"entre the size n of sudoku"<<endl;
     int n;
     cin>>n;
    // cout<<"now fill the sudoku 1 - 9 and 0-> empty"<<endl;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cin>>board[i][j];
         }
     }
  //   cout<<"your sudoku board is "<<endl;
   //  for(int i=0;i<n;i++){
   //      for(int j=0;j<n;j++){
   //        cout<<board[i][j] << " ";
   //      }
   //      cout<<endl;
   //  }
     if(fill_sudoku(n)){
         cout<<"true"<<endl;
         cout<<"solution is "<<endl;
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
               cout<<board[i][j] << " ";
             }
             cout<<endl;
         }
     }
     else{
         cout<<"false"<<endl;
     }
   
    
} 