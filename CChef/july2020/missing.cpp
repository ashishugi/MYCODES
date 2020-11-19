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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> x;
        vector<ll> y;
        int size = 4*n-1;
        for(int i=0;i<size;i++){
            ll temp_x,temp_y;
            cin>>temp_x>>temp_y;
            x.pb(temp_x);
            y.pb(temp_y);
        }
        ll res_x = x[0];
        ll res_y =y[0];
        for(int i=1;i<x.size();i++){
            res_x = res_x ^ x[i];
        }
        for(int i=1;i<y.size();i++){
            res_y = res_y ^ y[i];
        }
        cout<<res_x<< " "<<res_y<<endl;
       
    }
    return 0;
}