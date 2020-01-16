#include<bits/stdc++.h>
using namespace std;
int maize[10][10];
int output[10][10];
bool possible(int n,int row,int col){
      if(row==n || col==n){
          return false;
      }
        if(row<0 || col<0){
          return false;
      }
      if(maize[row][col]== 0){
          return false;
      }
      if(output[row][col]==1){ // cannot come back
          return false;
      }
    return true;
}
void rat_maize(int n,int row,int col){
  if(row==n-1 && col==n-1){
     output[row][col]=1;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<output[i][j]<<" ";
          }
      }
      output[row][col]=0;
      cout<<endl;
      return;
  }
  
  if(possible(n,row,col)){
      output[row][col]=1;
      rat_maize(n,row,col+1);
      rat_maize(n,row,col-1);
      rat_maize(n,row+1,col);
      rat_maize(n,row-1,col);
      output[row][col]=0;
 }
 
}
int main(void){
    int n;
    cout<<"enter the matix size"<<endl;
    cin>>n;
    cout<<"enter the matrix"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maize[i][j];
        }
       
    }
    
  rat_maize(n,0,0);
}