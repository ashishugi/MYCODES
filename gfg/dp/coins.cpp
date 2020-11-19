#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getAns(int* ar,int n,int target){
    int** dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[target+1];
        for(int j=0;j<=target;j++){
            dp[i][j] = 0;
        }
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            dp[i][j]+=dp[i-1][j];
            if(j >= ar[i-1]){
                dp[i][j]+=dp[i][j-ar[i-1]];
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=target;j++){
    //         cout<<dp[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][target];
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *ar=new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int target;
        cin>>target;
        int ans = getAns(ar,n,target);
        cout<<ans<<endl;
    }
    return 0;
}