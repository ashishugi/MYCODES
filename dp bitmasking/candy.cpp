#include<bits/stdc++.h>
using namespace std;
#define MAXN 16
typedef long long ll;
long long solve(int like[][MAXN],int n){
    ll final_count=0;
    ll *dp = new ll[(1<<n)];
    for(int i=0;i<(1<<n);i++){
        dp[i] = 0;
    }
    dp[0]=1;
    for(int mask=0;mask<(1<<n);mask++){
        int temp= mask;
        ll count = 0;
        while(temp>0){
            if(temp%2==1){
                count++;
            }
            temp = temp/2;
        }
        for(int j=0;j<n;j++){
            if(!(mask&(1<<j)) && like[count][j]==1){
                dp[mask|(1<<j)] += dp[mask];
            }
        }
    }
    return dp[(1<<n)-1];
	
}
int main()
{
	int n,like[MAXN][MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			cin>>like[i][j];
		}
	}
	cout<<solve(like,n)<<endl;
}
