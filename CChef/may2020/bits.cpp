#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long int ll;
using namespace std;
ll minBit(ll x , ll y,ll l ,ll r){
    ll maximum  = 0;
    ll z =0;
    ll temp_r = log2(r);
    ll next=0;
    ll temp_z =0;
    for( int  i =1 ;temp_z<=r;i++){
        temp_z = (1<<i)-1;
        ll value = (x&temp_z)*(y&temp_z);
       // cout<<value<< " and i :"<<i<< " and temp_z : "<<temp_z<<endl;
        //cout<<"temp_z"<< temp_z<<"and i : "<<i<<endl;
       if(temp_z > r){
           //cout<<"temp_z"<< temp_z<<"and i : "<<i<<endl;
           break;
       } 
       next = temp_z;
        if(value > maximum){
            maximum = value;
            z = temp_z;
        }
    }
   // cout<<next<<  " : "<<endl; 
    // for(ll i=next;i<=r;i++){
    //     int value = (x&i)*(y&i);
    //     if(value > maximum){
    //         maximum = value;
    //         z = i;
    //     }
    // }
    return z;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x , y , l , r;
        cin>>x>>y>>l>>r;
        ll ans = minBit(x , y, l, r);
        cout<<ans<<endl;
    }
    return 0;
}