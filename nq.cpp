#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int board[15][15];
int output[15][15];
bool possible(int row , int col , int n){
    if(row == n || col == n){
        return false;
    }
    else if(row < 0 || col < 0){
        return false;
    }
    for(int i = row-1 ; i>=0;i--){
        if(output[i][col]==1){
            return false;
        }
    }
    for(int i=row-1 , j=col-1 ; i>=0 && j>=0 ;j--,i--){
        if(output[i][j]==1){
            return false;
        }
    }
   for(int i=row-1 ,j = col+1;i>=0 && j<n;i--,j++){
     if(output[i][j]==1){
         return false;
     }
 }

    return true;

}
void nqueen(int n,int row,int col){
    if(row == n){
        cout<< " one of the solution is "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 cout<<output[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if(possible(row , i , n)){
            output[row][i] = 1;
            nqueen(n , row+1 , i);
            output[row][i]=0;
        }
    }


}

int main(void){
  cout<<"enter the vaue of n"<<endl;
  int n;
  cin >> n;
  nqueen(n,0,0);
}