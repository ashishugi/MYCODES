#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10001
vector<int>* seive(){             // similar seive problem code
    int isprime[MAX];
    for(int i=0;i<MAX;i++){
        isprime[i] = true;
    }
    for(int i=0;i*i<MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isprime[j]=false;
            }
        }
    }
    vector<int>* prime = new vector<int>();
    prime->push_back(2);
    for(int i=3;i<MAX;i++){
        if(isprime[i]){
            prime->push_back(i);
        }
    }
    return prime;
}
void printprime(ll l,ll r,vector<int>* &prime){
    int isprime[r-l+1];
    for(ll i=0;i<=r-l;i++){
        isprime[i] = true;
    }
    for(ll i=0;(ll)prime->at(i)*(ll)prime->at(i)<=r;i++){
        ll curr = prime->at(i);
        ll base = (l/curr)*curr;
        if(base  < l){
            base = base + curr;
        }
        for(ll  j=base;j<=r;j+=curr){
            isprime[j-l] = false;
        }
        if(base == curr){
            isprime[base -l]=true;
        }
    }
    for(ll i=0;i<=r-l;i++){
        if(isprime[i]){
            cout<<i+l<<endl;
        }
    }
}
int main(void){
    vector<int>* prime = new vector<int>();
    prime = seive();
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        printprime(l,r,prime);
    }
    return 0;
}