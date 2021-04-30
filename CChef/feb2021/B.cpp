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
ll getAns(vector<ll>& ar){
    sort(ar.begin(),ar.end());
    if(ar.size() == 3){
        return (abs(ar[0]-ar[1])+abs(ar[1]-ar[2])+abs(ar[2]-ar[0]));
    }
    int size = ar.size();
    ll val1 =0;
    ll val2 =0;
    val1 = (abs(ar[0]-ar[1])+abs(ar[1]-ar[size-1])+abs(ar[size-1]-ar[0]));
    val2 = (abs(ar[0]-ar[size-2])+abs(ar[size-2]-ar[size-1])+abs(ar[size-1]-ar[0]));
    return max(val1,val2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        ll res = getAns(ar);
        cout<<res<<endl;
    }

    return 0;
}