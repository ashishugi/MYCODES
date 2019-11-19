#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1000000007;
int solve(string str,int len){
    int *dp = new int[len+1];
    int check[260];
    memset(check,-1,sizeof(check));
    dp[0] = 1;
   // check[str[0]]++;
    for(int i=1;i<=len;i++){
        dp[i] = ((2%m) *(dp[i-1])%m)%m;
        if(check[str[i-1]]!=-1){
            dp[i] = ((dp[i])- dp[check[str[i-1]]]+m)%m;
        }
        check[str[i-1]] = i-1;
    }
    
    return dp[len]%m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sol = solve(str,str.length());
        cout<<sol<<endl;
    }
    return 0;
}

    /**int main () {
	int t; 
	cin >> t; 
	while (t--) {
		string str;
		cin>>str; 
		int n = str.length(); 
		//vector<int> last_index(256, -1); 
		int last_ind[256]; 
		memset(last_ind, -1, sizeof(last_ind));
		ll dp[n+1]; dp[0]=1; 
		for (int i=1; i<=n; i++) { 
			dp[i] = (2 % MAX * dp[i-1] % MAX) % MAX;
			if (last_ind[str[i-1]]!=-1) {
				dp[i] = (dp[i] - dp[last_ind[str[i-1]]] + MAX ) % MAX;
				}
				last_ind[str[i-1]]=i-1;
				}
				
				cout<<dp[n]%MAX<<endl; 
		
	}
} */