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
ll getMin(ll a,ll b){
    return ((a*b)/__gcd(a,b));
}
void getans(ll n){
    if(n%2 == 0){
        cout<<(n/2) << " "<<(n/2)<<endl;
    }else{
        ll half = n/2;
        half++;
        ll res =INT_MAX;
        ll res_a =0;
        ll res_b =0;
        int count =0;
        while(half<n){
            ll temp = getMin(half,(n-half));
           // cout<<half<< " "<<(n-half)<<"  "<<temp<< " "<<endl;
            if(res > temp){
                res_a = n-half;
                res_b = half;
                res = temp;
            }
            half++;
            count++;
        }
        cout<<res_a<< " "<<res_b<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        getans(n);
    }
    return 0;
}