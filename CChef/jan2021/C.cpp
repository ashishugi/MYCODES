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
ll getAns(vector<ll>& a ,vector<ll>& b){
    int len1 = a.size();
    int len2 = b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll sum1=0;
    ll sum2 =0;
    for(int i=0;i<len1;i++){
        sum1+=a[i];
    }
    for(int j=0;j<len2;j++){
        sum2+=b[j];
    }
    ll count=0;
    ll i=0;
    ll j=len2-1;
    if(sum1 > sum2){
        return 0;
    }
    while(sum1<=sum2 && i<len1 && j>=0){
        sum1+=b[j]-a[i];
        sum2+=a[i]-b[j];
        i++;
        j--;
        count++;
    }
    if(sum1 <= sum2){
        return -1;
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        vector<ll> a(n,0);
        vector<ll> b(m,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        ll res = getAns(a,b);
        cout<<res<<endl;
    }
    return 0;
}