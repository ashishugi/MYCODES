#include<bits/stdc++.h>
using namespace std;
int calculate1(int **ar,int row , int col){
    int max_sum =0;
    int *output[40][40];
    int temp_sum =INT_MIN;
        for(int i=0;i<row ;i++){
            for(int j=0;j<col;j++){
                temp_sum =0 ;
                for(int m=i;m<row;m++){
                    for(int n=j;n<col;n++){
                       temp_sum +=ar[m][n];
                    }
                } // end loop of finishing point
                output[i][j] = temp_sum;
            }
        } // end loop of outer loop
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                for(int m=i;m<row;m++){
                    for(int n=j;m<col;n++){
                        int dia=0,  right=0 , down=0 , val;
                        if(m+1 < row && n+1<col){
                            dia = output[m+1][n+1];
                        }
                        else if(m+1<row){
                            down = output[m+1][n];
                        }
                        else if(n+1 < col){
                            right = output[m][m+1];
                        }
                      val =  output[i][j]
                    }
                }
            }
        }
}

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
   // int result = calculate(ar , si ,sj ,row,col);
   int answer = calculate1(ar , row,col);
   cout<<answer<<endl;

}
