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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double res = k1*k2*k3*v;
        res = 100/res;
        res =       (res*100)/100;
        // cout<<fixed<<setprecision(2)<< res<<endl;
        double cmp = (9.58*100)/100.0;
        double EPS = 1e-9;
        if((9.58 - res) < EPS){
            cout<<"Yes"<<endl;
        }else{
            cout<<"N0"<<endl;
        }
    }
    return 0;
}