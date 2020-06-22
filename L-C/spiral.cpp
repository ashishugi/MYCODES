#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void printSpiral(int** mat,int row,int col){
    int top =  0;
    int bottom = row-1;
    int left = 0;
    int right = col-1;
    int steps = row*col;
    int dir = 0; // 0-> l to r , 1 -> top to bottom , 2->right to left , 3->bottom to top .
    cout<<" the spiral matrix is as below"<<endl;
    while(steps){
        if(dir == 0){
            for(int i=left;i<=right;i++){
                cout<<mat[top][i]<< " ";
                steps--;
            }
            dir= 1;
            top++;
        }else if(dir == 1){
            for(int i=top;i<=bottom;i++){
                cout<<mat[i][right]<< " ";
                steps--;
            }
            dir=2;
            right--;
        }else if(dir == 2){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<< " ";
                steps--;
            }
            dir=3;
            bottom--;
        }else{
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
                steps--;
            }
            dir=0;
            left++;
        }
        if(steps%4 == 0){
            cout<<endl;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row,col;
    cin>>row>>col;
    int** mat = new int*[row];
    loop(i,0,row){
        mat[i] = new int[col];
        loop(j,0,col){
            cin>>mat[i][j];
        }
    }
    printSpiral(mat,row,col);
    return 0;
}