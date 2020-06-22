#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getans(char** ar,int row,int col,int i,int j,vector<vector<int>>& path){
    if(i>=row || i<0 || j>=col || j<0){
        return INT_MAX-200;
    }
    if(path[i][j] == -1 || ar[i][j]=='W'){
        return INT_MAX-200;
    }
    if(ar[i][j] == 'B'){
        return 0;
    }
    path[i][j]=-1;
    int ans1 = 1+getans(ar,row,col,i,j-1,path);
    int ans2 = 1+getans(ar,row,col,i+1,j,path);
    int ans3 = 1+getans(ar,row,col,i,j+1,path);
    int ans4 = 1+getans(ar,row,col,i-1,j,path);
    path[i][j]=0;
    return min(ans1,min(ans2,min(ans3,ans4)));
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    char** ar = new char*[m];
	    int** res = new int*[m];
	    for(int i=0;i<m;i++){
	        ar[i] = new char[n];
	        res[i] = new int[n];
	        for(int j=0;j<n;j++){
	            cin>>ar[i][j];
	            res[i][j] = 0;
	        }
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(ar[i][j] == 'O'){
                    vector<vector<int>> path(m,vector<int>(n,0));
	                int ans = getans(ar,m,n,i,j,path);
	                if(ans > 200){
	                    res[i][j] = -1;
	                }else{
	                    res[i][j] = ans;
	                }
	            }else if(ar[i][j] == 'B'){
	                res[i][j] = 0;
	            }else if(ar[i][j] == 'W'){
	                res[i][j] = -1;
	            }
	        }
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cout<<res[i][j] << " ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}