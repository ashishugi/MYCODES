#include<bits/stdc++.h>
#include<vector>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
#define MAX 1000000
vector<int> sieve(){
    bool* isprime = new bool[MAX];
    for(int i=0;i<MAX;i++){
        isprime[i] = true;
    }
    isprime[0]= false;
    isprime[1] = false;
    for(int i=2;i*i<MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isprime[j] = false;
            }
        }
    }
    vector<int> res;
    for(int i=2;i<MAX;i++){
        if(isprime[i]){
            res.push_back(i);
        }
    }
    return res;
}
int getlargest(int n,vector<int>& prime){
    int ans =0;
    for(int i=0;i<prime.size() && i<=n;i++){
        if(n%prime[i] == 0){
            ans = prime[i];
        }
    }
    return ans;
}
int main(void){
    int t;
    cin>>t;
    vector<int> prime = sieve();
    while(t--){
        int n;
        cin>>n;
        int ans = getlargest(n,prime);
        cout<<ans<<endl;
    }
  return 0;
}