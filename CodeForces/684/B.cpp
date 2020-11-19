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
ll getMedian(ll* ar,int n,int k){
    ll size = n*k;
    ll sum=0;
    int step =0;
    if(n%2 == 0){
        step = int(n/2)+1;
    }else{
        step = ceil(n/2.0);
    }
    // cout<<step<< " ";
    for(int i=size-1;i>=0 && k>0;i-=step,k--){
        sum = sum + ar[(i-step+1)];
        // cout<<i<< " "<<ar[(i-step+1)]<<endl;
    }
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll* ar = new ll[n*k];
        for(int i=0;i<(n*k);i++){
            cin>>ar[i];
        }
        // sort(ar,ar+(n*k));
        ll res = getMedian(ar,n,k);
        cout<<res<<endl;
    }
    return 0;
}