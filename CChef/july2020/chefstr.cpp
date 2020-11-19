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
ll getsum(int* ar,int n){
    ll sum =0;
    for(int i=1;i<n;i++){
       ll val = abs(ar[i]-ar[i-1]);
       if(val>0){
           sum+=val-1;
       }
    }
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        ll res = getsum(ar,n);
        cout<<res<<endl;
    }
    return 0;
}