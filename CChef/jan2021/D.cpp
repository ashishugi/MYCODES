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
void anticlock(ll n,ll k,ll x,ll y){
    k = k%4;
    if(k == 1){
        int dis = abs(n-x);
        x = n;
        y = y+dis;
    }else if(k == 2){
        ll dis = abs(n-x);
        x = n;
        y = y+dis;
        swap(x,y);
    }else if(k == 3){
        ll dis = abs(n-x);
        x = n;
        y = y+dis;
        swap(x,y);
        y = abs(n - x);
        x = 0;
    }else{
        ll dis = abs(n-x);
        x = n;
        y = y+dis;
        swap(x,y);
        y = abs(n - x);
        x = 0;
        swap(x,y);
    }
    cout<<x<< " "<<y<<endl;
}
void clock(ll n,ll k,ll x , ll y){
    k = k%4;
    if(k == 1){
        int dis = abs(n-y);
        y = n;
        x = x+dis;
    }else if(k == 2){
        int dis = abs(n-y);
        y = n;
        x = x+dis;
        swap(x,y);
    }else if(k == 3){
        int dis = abs(n-y);
        y = n;
        x = x+dis;
        swap(x,y);
        x = abs(n-y);
        y =0;
    }else{
        int dis = abs(n-y);
        y = n;
        x = x+dis;
        swap(x,y);
        x = abs(n-y);
        y =0;
        swap(x,y);
    }
    cout<<x<< " "<<y<<endl;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        ll res=0;
        if(abs(x - y) == 0){
            cout<<n<< " "<<n<<endl;
        }else if((x-y) > 0){
            anticlock(n,k,x,y);
        }else{
            clock(n,k,x,y);
        }
    }
    return 0;
}