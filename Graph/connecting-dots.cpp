#include<bits/stdc++.h>
using namespace std;
#define MAXN 51
bool check;
void countingnum(char board[][MAXN],bool** visited,int n,int m,int start ,int end ,int i,int j,char ch,int *x,int *y ,int count){
    visited[i][j] = true;
   if(i<0 || j<0 || i>=n || j>=m){
       return;
   }
    if(count>=4 && ((i-1==start && j==end)||(i+1==start && j==end)|| (i==start && j+1==end)||(i==start && j-1==end))){       // start == i && end ==j 
        check =true;
        return;
    }
    int ans=0;
    for(int k=0;k<4;k++){
        int newx = i+x[k];
        int newy = j+y[k];
        if(newx>=0 && newx<n && newy>=0 && newy<m){
            if(board[newx][newy]==ch && !visited[newx][newy]){
            countingnum(board,visited,n,m,start,end,newx,newy,ch,x,y,count+1);
            }
        }
    }  
}
int solve(char board[][MAXN],int n, int m)
{
    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[m];
        for(int j=0;j<m;j++){
            visited[i][j] =false;
        }
    }
    check=false;
    int x[] = {-1,0,1,0};
    int y[] = {0,1,0,-1};
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch = board[i][j];
            if(!visited[i][j]){
                 countingnum(board,visited,n,m,i,j,i,j,ch,x,y,1);
                if(check){
                    return 1;
                }
            }
        }
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            visited[i][j] =false;
        }
     }
    } //  end of outer loop
    return 0;
}
int main()
{
	int N,M,i;
	char board[MAXN][MAXN];
	cin>>N>>M;
	for(i = 0;i < N; i++){
		cin>>board[i];
	}
	cout<<solve(board,N,M)<<endl;
}


/******************* 2nd method *****************************
bool check;
void countingnum(char board[][MAXN],bool** visited,int n,int m,int i,int j,char ch,int *x,int *y ,int count,int previ,int prevj){
    visited[i][j] = true;
   if(i<0 || j<0 || i>=n || j>=m){
       return;
   }
   
    int ans=0;
    
    for(int k=0;k<4;k++){
        int newx = i+x[k];
        int newy = j+y[k];
        if(newx>=0 && newx<n && newy>=0 && newy<m){
            if(board[newx][newy]==ch && !visited[newx][newy]){
            countingnum(board,visited,n,m,newx,newy,ch,x,y,count+1,i,j);
            }
             if(count>=4 && visited[newx][newx] && board[newx][newy]==ch && previ!=newx && prevj!=newy){       // start == i && end ==j 
               check =true;
               return;
           }
        } //outer if loop{} 
    }  
}
int solve(char board[][MAXN],int n, int m)
{
    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[m];
        for(int j=0;j<m;j++){
            visited[i][j] =false;
        }
    }
    check=false;
    int x[] = {-1,0,1,0};
    int y[] = {0,1,0,-1};
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch = board[i][j];
            if(!visited[i][j]){
                 countingnum(board,visited,n,m,i,j,ch,x,y,1,-1,-1);
                if(check){
                    return 1;
                }
            }
        }
    } //  end of outer loop
    return 0;
}
*/