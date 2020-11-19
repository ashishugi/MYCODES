#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
typedef long long ll;
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;
        ll val = n/x;
        ll ans = (x*val)+y;
        while(ans>n){
            val--;
            ans =(x*val)+y;
        }
        cout<<ans<<endl;
    }
    return 0;   
}