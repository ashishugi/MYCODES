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
ll getAns(vector<ll>& ar){
    vector<ll> positive;
    vector<ll> negative;
    ll countZero =0;
    for(int i=0;i<ar.size();i++){
        if(ar[i]>0){
            positive.push_back(ar[i]);
        }else if(ar[i] < 0){
            negative.push_back(ar[i]);
        }else{
            countZero++;
        }
    }
    ll res =0;
    for(ll x : positive){
        res += abs(x - 1);
    }
    for(ll x : negative){
        res += abs(-1 - x);
    }
    if(negative.size()%2 == 0){
        res += countZero;
    }else if(negative.size()%2 != 0 && countZero == 0){
        res += 2;
    }else if(negative.size()%2!=0 && countZero>0){
        res += countZero;
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll res = getAns(ar);
    cout<<res<<endl;
    return 0;
}