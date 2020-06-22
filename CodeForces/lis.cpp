#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long ll;
using namespace std;
int lis(ll* ar,int n){
    int* dp = new int[n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        dp[i] = 1;
        int maxi=0;
        for(int j=i-1;j>=0;j--){
            int temp =0;
            if(ar[j] < ar[i]){
                temp = dp[j];
            }
            maxi = max(maxi,dp[j]);
        }
        dp[i] += maxi;
    }
    // loop(i,0,n){
    //     cout<<dp[i]<<  " ";
    // }
   // int* arMax = new int[n];
   // memset(arMax,0,size(arMax));
    unordered_map<int,int> um;
    set<int> st;
    loop(i,0,n){
        st.insert(ar[i]);
    }
    vector<int> v;
    for(auto x : st){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int size= v.size();
    for(int i=0;i<n;i++){
        um[ar[i]] = (size-i-1);
    }
    //unordered_map<int,int>::iterator it =  um.begin();
    loop(i,0,n){
        dp[i]+=um[ar[i]];
    }
    int ans = *max_element(dp,dp+n);
    return ans;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll* ar = new ll[n];
        loop(i,0,n){
            cin>>ar[i];
        }
        int ans = lis(ar,n);
        cout<<ans<<"\n";
    }
    return 0;
}