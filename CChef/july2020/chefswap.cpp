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

int getRes(ll* a,ll* b,int n){
    unordered_map<ll, int> A;
    unordered_map<ll,int> B;
    unordered_set<ll> stA;
    unordered_set<ll> stB;
    unordered_set<ll> presentINA;
    unordered_set<ll> presentINB;
    for(int i=0;i<n;i++){
        A[a[i]]++;
        stA.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        B[b[i]]++;
        stB.insert(b[i]);
    }
    for(auto x : stA){
        if(stB.find(x)==stB.end()){
            presentINA.insert(x);
        }
    }
    for(auto x : stB){
        if(stA.find(x)==stA.end()){
            presentINB.insert(x);
        }
    }
    if(presentINA.size()==0 && presentINB.size()==0){
        return 0;
    }
    for(auto x : presentINA){
        if(A[x]%2 !=0){
            return -1;
        }
    }
    for(auto x : presentINB){
        if(B[x]%2 !=0){
            return -1;
        }
    }
    if(presentINA.size() != presentINB.size()){
        return -1;
    }
    int res =0;


return 0;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        ll *a =new ll[n];
        ll *b = new ll[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int res  = getRes(a,b,n);
        cout<<res<<endl;
    }
    return 0;
}