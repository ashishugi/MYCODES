#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<unordered_map>
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
        ll n;
        cin>>n;
        ll res =0;
        if(n%2==0){
            res = n/2;
        }else{
            res = (n/2) + 1;
        }
        cout<<res<<endl;
    }
    return 0;
}