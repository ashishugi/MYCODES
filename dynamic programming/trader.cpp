#include <bits/stdc++.h> 
using namespace std; 
int trader(
	int* arr, int tr, int n, int i, int j, int k, int*** dp){
		if (i==n){ 
			if (k==1) return -1;
			else return 0; 
			
		}
		if (j==tr) {
			if(k==0) 
			return 0; else return -1; 
			
		} if (dp[i][j][k]!=-1) 
		return dp[i][j][k];
		if (k==1){
			int temp = trader(arr, tr, n, i+1, j+1, 0, dp);
			int ans1=INT_MIN, ans2 = INT_MIN;
			if(temp!=-1) ans1=temp+arr[j]; 
			int temp1 = trader(arr, tr, n, i, j+1, 1, dp);
			if(temp1!=-1) ans2=temp1; 
			dp[i][j][k]=max(0, max(ans1, ans2)); 
			
		} 
		else{ 
			int ans1=INT_MIN, ans2 = INT_MIN; 
			int temp = trader(arr, tr, n, i, j+1, 1, dp);
			if(temp!=-1) 
			ans1=temp-arr[j];
			int temp1 = trader(arr, tr, n, i, j+1, 0, dp);
			if(temp1!=-1) ans2=temp1; 
			dp[i][j][k]=max(0, max(ans1, ans2));
			} 
			return dp[i][j][k];
			} 
			int main() { 
				int q; cin>>q;
				while(q--){ 
					int n; cin>>n;
					int k; cin>>k; 
					int *ar = new int[k]; 
					for(int i=0;i<k;i++){
						cin>>ar[i]; 
						
					}
					int ***dp = new int**[n+1]; 
					for(int i=0;i<=n;i++){ 
						dp[i] = new int*[k+1];
						for(int j=0;j<=k;j++){
							dp[i][j] = new int[2];
							for(int m=0;m<2;m++){
								dp[i][j][m] = -1;
								}
								}
								} 
								for(int i=0;i<=n;i++){ 
									for(int j=0;j<=k;j++){ 
										for(int m=0;m<2;m++){ 
											dp[i][j][m] = -1; 
											
										} } } 
										cout<<trader(ar, k, n, 0, 0, 0, dp)<<endl;
										for(int i=0;i<=n; i++){ 
											for(int j=0;j<=k;j++) 
											delete [] dp[i][j]; 
											
										} 
										delete [] dp; delete [] ar; 
					
				}
				return 0; 
				
			}