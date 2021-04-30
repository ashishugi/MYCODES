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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        ll res1 =  max(abs(1-c),abs(m-c));
        ll res2 = max(abs(1-r),abs(n-r));
        cout<<(res1+res2)<<endl;
    }
    return 0;
}