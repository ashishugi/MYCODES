#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getmax(int** mine,int m,int n,int i,int j,int x[],int y[]){
	cout<<i<< " "<<j<<endl;
    if(i==m-1 && j==n-1){
		return mine[i][j];
	}
	if(i==0 && j==n-1){
		return mine[i][j];
	}
	if(j==n-1){
		return mine[i][j];
	}
    if(i>=m || j>=n || i<0){
        return INT_MIN+20;
    }
    int ans =INT_MIN;
    for(int index=0;index<3;index++){
		
        int newx = i+x[index];
        int newy=j+y[index];
        ans = max(ans ,mine[i][j]+getmax(mine,m,n,newx,newy,x,y));
        
    }
	return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int** arr = new int*[m];
	    loop(i,m){
	        arr[i] = new int[n];
	        loop(j,n){
	            cin>>arr[i][j];
	        }
	    }
	    int x[]= {-1,0,1};
	    int y[]= {1,1,1};
	    int total =INT_MIN;
	    loop(i,m){
	        total = max(total , getmax(arr,m,n,i,0,x,y));
			cout<<i<<" next"<<endl;
	    }
	    cout<<total<<endl;
	}
	return 0;
}