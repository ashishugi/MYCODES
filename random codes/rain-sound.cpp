#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
class rain{
    public:
    ll min;
    ll max;
};
rain getminmax(ll l, ll r ,ll s){
    ll start=1;
    rain a;
    a.min=-1;
    a.max=-1;
    ll val=0;
    while(val <= r){
        val = start*s;
       
        if(a.min==-1 && val >=l && val<= r){
            a.min =start;
        }
        if(val<=r && val>=l){
            a.max = start;
        }
         start++;
    }
    return a;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        ll l,r,s;
        cin>>l>>r>>s;
        rain ans = getminmax(l,r,s);
        cout<<ans.min<< " "<<ans.max<<endl;
    }
    return 0;
}