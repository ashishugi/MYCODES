#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int findMaxSquareWithAllZeros(int** arr, int row, int col){
    
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */ 
   // int **output = new int*[row];
    int output[row+1][col+1];
    for(int i=0;i<col;i++){
      //  output[i] = new int[row];
        if(arr[0][i]==0){
            output[0][i] = 1;
        }
        else{
            output[0][i] = 0;
        }
    }
     for(int i=0;i<row;i++){
        if(arr[i][0] == 0){
            output[i][0] = 1;
        }
        else{
            output[i][0] = 0;
        }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(arr[i][j] == 0){
            int minimum = min(output[i-1][j-1] , min(output[i-1][j],output[i][j-1]));
                output[i][j] = minimum +1;
            }
            else{
                output[i][j] = 0;
            }
        }
    }
    
    int maximum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(maximum < output[i][j]){
                maximum = output[i][j];
            }
        }
    }
    return maximum;
   
}
int main()
 {
  int **arr,n,m,i,j;
  cin>>n>>m;
  arr=new int*[n];
  for(i=0;i<n;i++)
      {
       arr[i]=new int[m];
      }
  for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
	    {
	     cin>>arr[i][j];
	    }
     }
  cout << findMaxSquareWithAllZeros(arr,n,m) << endl;
  delete arr;
  return 0;
}