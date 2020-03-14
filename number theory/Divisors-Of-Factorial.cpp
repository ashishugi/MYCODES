#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define MAX 500001
#define MOD 1000000007
typedef long long ll;
vector<int>* sieve(){
    bool isprime[MAX];
    for(int i=2;i<=MAX;i++){
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    int limit = sqrt(MAX);
    for(int i=2;i*i<=MAX;i++){
        if(isprime[i] == true){
            for(int j=i*i;j<=MAX;j+=i){
                isprime[j] = false;
            }
        }
    }
    vector<int>* v = new vector<int>();
    v->push_back(2);
    for(int i=3;i<=MAX;i+=2){
        if(isprime[i]){
            v->push_back(i);
        }
    }
    return v; 
}
ll divisor(int n ,vector<int>* & prime){
    ll res =1;
    
    for(int i=0;prime->at(i)<=n;i++){
        ll count=0;
        int k = prime->at(i);
        while((n/k)!=0){
            count = (count+(n/k))%MOD;
            k=k*prime->at(i);
        }
        res = (res * ((count+1)%MOD))%MOD;
    }
    return res;
}
int main(){
	int t;
     cin>>t;
    vector<int>* prime = sieve();
    while(t--){
        int n;
        cin>>n;
        cout<<divisor(n,prime)<<endl;
    }
	return 0;
}