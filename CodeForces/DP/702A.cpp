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
ll getLen(vector<ll>& ar){
    ll max_so_far = 1;
    ll curr_max=1;
    for(int i=1;i<ar.size();i++){
        if(ar[i] > ar[i-1]){
            curr_max++;
        }else{
            curr_max=1;
        }
        max_so_far = max(max_so_far,curr_max);
    }
    return max_so_far;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll res = getLen(ar);
    cout<<res<<endl;
    return 0;
}