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
int main(void){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x = n/4;
        ll y = n%4;
        ll res  =0;
        if(x > 0){
            res = 60+(x-1)*36;
        }
        if(y==1){
            res+=20;
        }else if(y==2){
            res+=36;
        }else if(y==3){
            res+=51;
        }
        cout<<(res- (6*y))<<endl;
    }
}