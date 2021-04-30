#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getans(int* p,int n){
    int row = n;
    int col = n;
    int** dp = new int*[row];
    for(int i=0;i<row;i++){
        dp[i] = new int[col];
        // for(int j=0;j<col;j++){
        //     if(i == j){
        //         dp[i][j] = 0;
        //     }else{
        //         dp[i][j] = INT_MAX;
        //     }
        // }
    }
    for(int i=0;i<row;i++){
        dp[i][i] = 0;
    }
    for(int j=2;j<col;j++){
        int tempj = j;
        for(int i=1;(i<row && tempj<col);i++,tempj++){
             dp[i][tempj] = INT_MAX;
            for(int k = i;k<tempj;k++){
                int val = dp[i][k]+dp[k+1][tempj]+p[i-1]*p[k]*p[tempj];
               if(val < dp[i][tempj]){
                   dp[i][tempj] = val;
               }
            }
        }
    }
    return dp[1][row-1];
}
int getans2(int* p , int st,int end){
    if(st >= end){
        return 0;
    }
    int ans=INT_MAX;
    for(int k=st;k<end;k++){
        int res = getans2(p,st,k)+getans2(p,k+1,end)+p[st-1]*p[k]*p[end];
        if(ans > res){
            ans = res;
        }
        //  return ans;
    }
    return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* p = new int[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    int ans = getans2(p,1,n-1);
	    cout<<ans<<endl;
	}
	return 0;
}