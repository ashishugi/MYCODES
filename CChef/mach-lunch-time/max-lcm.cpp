#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
ll getlcm(ll* ar,ll n){
    ll lcm = ar[0];
    for(ll i=1 ;i<n;i++){
        lcm = (ar[i]*lcm)/__gcd(lcm,ar[i]);
    }
    return lcm; 
}
ll getmaxlcm(ll lcm,ll m,ll* ar,ll n){
    //int val= *min_element(ar,ar+n);
    ll val=1;
    for(ll i=1;i<=m;i++){
        ll ans = (i*lcm)/__gcd(i,lcm);
        if(ans > lcm){
            val = i;
        }
    }
    return val;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll* ar = new ll[n];
        loop(i,n){
            cin>>ar[i];
        }
        ll lcm = getlcm(ar,n);
        ll maxlcm = getmaxlcm(lcm , m,ar,n);
        cout<<maxlcm<<endl;
    }
  return 0;
}