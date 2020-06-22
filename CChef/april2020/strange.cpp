#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
bool check(ll x,ll k){
    ll count =0;
    ll val=x;
   
    for(ll i=2;i*i<=val;i++){
        while(val%i==0){
            count++;
            //cout<<(val/i)<<endl;
            val=val/i;
        }
    }
    if(val>1){
        count++;
    }
    if(count >= k){
        return true;
    }
    return false;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(check(x,k)){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
  return 0;
}