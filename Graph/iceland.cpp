
#include<bits/stdc++.h>
using namespace std;

void dfs(int** edge,int n,int start,bool* visited){
    visited[start] = true;
    for(int i=0;i<n;i++){
        if(edge[start][i]==1 && visited[i]==false){
            dfs(edge,n,i,visited);
        }
    }
}
int solve(int n,int m,vector<int>u,vector<int>v)
{
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] =false;
    }
    int count =0;
    int** edge = new int*[n];
    for(int i=0;i<n;i++){
        edge[i] = new int[n];
        for(int j=0;j<n;j++){
            edge[i][j] =0;
        }
    }
    auto itr1=u.begin();
    auto itr2 = v.begin();
    for(int i=0;i<m;i++){
        int a,b;
        a=*itr1;
        b =*itr2;
       // cout<<a<< " "<<b<<endl;
        edge[a-1][b-1]=1;
        edge[b-1][a-1]=1;
        itr1++;
        itr2++;
    }
    for(int i=0;i<n;i++){
        if(visited[i] == false){
            count++;
            dfs(edge,n,i,visited);
        }
    }
	return count;
}
int main()
{
	int n,m;
	vector<int>u,v;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		u.push_back(x);
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<solve(n,m,u,v)<<endl;
}
/*
void dfs(int** edge,int n,int start,bool* visited){
    visited[start] = true;
    for(int i=1;i<=n;i++){
        if(edge[start][i]==1 && visited[i]==false){
            dfs(edge,n,i,visited);
        }
    }
}
int solve(int n,int m,vector<int>u,vector<int>v)
{
    bool* visited = new bool[n+2];
    for(int i=1;i<=n;i++){
        visited[i] =false;
    }
    int count =0;
    int** edge = new int*[n+2];
    for(int i=1;i<=n;i++){
        edge[i] = new int[n+2];
        for(int j=1;j<=n;j++){
            edge[i][j] =0;
        }
    }
    auto itr1=u.begin();
    auto itr2 = v.begin();
    for(int i=1;i<=m;i++){
        int a,b;
        a=*itr1;
        b =*itr2;
       // cout<<a<< " "<<b<<endl;
        edge[a][b]=1;
        edge[b][a]=1;
        itr1++;
        itr2++;
    }
    for(int i=1;i<=n;i++){
        if(visited[i] == false){
            count++;
            dfs(edge,n,i,visited);
        }
    }
	return count;
}
*/