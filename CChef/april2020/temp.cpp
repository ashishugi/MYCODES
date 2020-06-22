#include<bits/stdc++.h>
#include<vector>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
#define MAX 100000
vector<ll> prime;
void sieve(){
    bool* isprime = new bool[MAX];
    for(int i=0;i<MAX;i++){
        isprime[i]=true;
    }
    isprime[0]=false;
    isprime[1] = false;
    for(int i=2;i*i<MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(ll i=2;i<MAX;i++){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    // for(auto x : res){
    //     cout<<x<< " ";
    // }
    //cout<<"reached here "<<endl;
}
void possible(int val,ll x,ll y){
    unordered_map<int,int> um;
    int temp = val;
    int i=0;
    while(temp!=1){
        while(temp%prime[i]==0){
            temp = temp/prime[i];
            um[prime[i]]++;
        }
        i++;
    }
    for(auto idx : um){
        cout<<idx.first<< "  "<<idx.second<<endl;
    }
}
int main(void){
    int n;
    sieve();
    cin>>n;
    possible(n,1,1);
  return 0;
}