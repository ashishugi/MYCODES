#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int minsteps = INT_MAX;
int path[26][26];
bool possible(int x,int y,int** matrix,int row,int col){
    if(x<0 || x>=row || y<0 || y>=col ){
        return false;
    }
    if(matrix[x][y] == 1 || path[x][y]!=0){
        return false;
    }
    return true;
}
void getPath(int** matrix , int row,int col,int r,int c,int dx,int dy,int X[] ,int Y[],int steps){
    if(r == dx && c==dy){
        //cout<<steps<< " ";
       minsteps = min(minsteps , steps);
       path[r][c] = minsteps;
       return;
    }
    for(int i=0;i<8;i++){
        int newx = r+X[i];
        int newy = c+Y[i];
        if(possible(newx,newy,matrix,row,col)){
            matrix[newx][newy] = 1;
            getPath(matrix,row,col,newx,newy,dx,dy,X,Y,steps+1);
            matrix[newx][newy] = 0;    
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int row,col;
        cin>>row>>col;
        int sx,sy,dx,dy;
        cin>>sx>>sy>>dx>>dy;
        sx-=1;
        sy-=1;
        dx-=1;
        dy-=1;
        int X[] = {-2,-1,1,2,2,1,-1,-2};
        int Y[] = {1,2,2,1,-1,-2,-2,-1};
        int** matrix = new int*[row];
        for(int i=0;i<row;i++){
            matrix[i] = new int[col];
            for(int j=0;j<col;j++){
                matrix[i][j] = 0;
            }
        }
        matrix[sx][sy] = 1;
        getPath(matrix,row,col,sx,sy,dx,dy,X,Y,0);
        if(minsteps == INT_MAX){
            cout<<"-1"<<endl;
        }else{
            cout<<minsteps<<endl;
        }
    }
	
	return 0;
}