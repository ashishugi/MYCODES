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
void getMinMax(vector<ll> &ar, ll x){
    ll mini=0;
    ll maxi=0;
    ll sum=0;
    ll sum1=0;
    double X = x;
    for(int i=0;i<ar.size();i++){
        sum = sum + ar[i];
        sum1 = sum1 + ceil(ar[i]*1.0/x);
    }
    sum = sum/x;
    if(sum1 > sum){
        mini = sum;
        maxi = sum1;
    }else{
        mini = sum1;
        maxi = sum;
    }
    cout<<mini<< " "<<maxi<<endl;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll x;
        cin>>x;
        vector<ll> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        getMinMax(ar,x);
    }
    return 0;
}