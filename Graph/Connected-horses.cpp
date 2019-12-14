#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
#define MAX 1000000007


int dfs(int** edge,bool** visited ,int start,int end,int n,int m ,int* x,int* y){
    visited[start][end] = true;
    int sum=1;
    for(int k=0;k<8;k++){
        int newx = start+x[k];
        int newy = end+y[k];
        if(newx>=0 && newx<n && newy>=0 && newy<m && !visited[newx][newy] && edge[newx][newy]==1){
            sum += dfs(edge,visited,newx,newy,n,m,x,y);
        }
    }
    return sum;
}
int main()
{
	int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int** edge = new int*[n];
        for(int i=0;i<n;i++){
            edge[i] = new int[m];
            for(int j=0;j<m;j++){
                edge[i][j] =0;
            }
        }
        for(int i=0;i<q;i++){
            int s,f;
            cin>>s>>f;
            edge[s-1][f-1] =1;
        }
        ll* fact = new ll[n*m];
        fact[0] = 1;
        for(int i=1;i<n*m;i++){
            fact[i] =(ll) ((i)%MAX*((fact[i-1])%MAX)%MAX);
        }
     bool** visited = new bool*[n];
        for(int i=0;i<n;i++){
            visited[i] = new bool[m];
            for(int j=0;j<m;j++){
                visited[i][j] = false;
            }
        }
        int x[] = {-2,-2,-1,1,2,2,1,-1};
        int y[] = {-1,1,2,2,1,-1,-2,-2};
        ll sum =1;
        int temp =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && edge[i][j]==1){
                    temp= dfs(edge , visited,i,j,n,m,x,y);
                     sum = ((sum)%MAX*(fact[temp])%MAX)%MAX;
                }
                
            }
          
        }
        cout<<sum<<endl;
    } // end of while 
	return 0;
    
    
    
    
    
    
    
    
}

