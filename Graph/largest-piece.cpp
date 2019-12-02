#include<bits/stdc++.h>
using namespace std;
int count(char cake[NMAX][NMAX] ,bool** visited , int n ,int i,int j,int* x,int* y){
    visited[i][j]  = true;
    
    if(i < 0 || j<0 || i>n || j>n){
        return 0;
    } 
    int ans=0;
    for(int k=0;k<4;k++){
        int newx = i+x[k];
        int newy = j+y[k];
        if(newx>=0 && newx<n && newy>=0 && newy<n){
            if(cake[newx][newy]=='1' && !visited[newx][newy]){
            ans = ans+ 1 +count(cake,visited,n,newx,newy,x,y);
            }
        }
    }
    return ans;
    
}
int solve(int n,char cake[NMAX][NMAX])
{
	// Write your code here .
    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[n];
        for(int j=0;j<n;j++){
            visited[i][j] = false;
        }
    }
    int maxnum =0;
    int x[] = {-1,0,1,0};
    int y[] = {0,1,0,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j] && cake[i][j]=='1'){
                int number = count(cake,visited,n,i,j,x,y);
                number = number+1;
                if(maxnum < number){
                    maxnum = number;
                }
            }
        }
    } // end of the outer loop {}
    return maxnum;
}