#include<bits/stdc++.h>
using namespace std;
int matrix[10][10];
bool possible(int col,int row,int n){
    for(int i=row-1;i>=0;i--){
        if(matrix[i][col]==1){
            return false;
        }
    }
   
      for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(matrix[i][j]==1){
            return false;
        }
    }
    for(int i=row-1, j=col+1;i>=0 && j<n;i--,j++){
        if(matrix[i][j]==1){
            return false;
        }
    }
    return true;
}
void nqueen(int n,int row){
    if(row==n){
       
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout<<matrix[i][j]<< " ";
            }
            
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(possible(i,row,n)){
           matrix[row][i]=1;
           nqueen(n,row+1);
           matrix[row][i]=0;
        }

    }
    return;
}
int main(void){ 
    int n;
    cout<<"enter the number queens"<<endl;
    cin>>n;
    memset(matrix,0,10*10*sizeof(int));
    nqueen(n,0);
}