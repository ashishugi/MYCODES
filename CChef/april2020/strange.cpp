#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
#define MAX 1000000000
bool isprime[MAX];
unordered_set<ll>  us;
void makeprime(){
    for(int i=1;i<MAX;i++){
        isprime[i]=true;
    }
    cout<<3<<"reached "<<endl;
    isprime[1] = false;
    for(ll i=2;i*i<MAX;i++){
        if(isprime[i]==true){
            for(int j = i*i;j<MAX;j+=i){
                isprime[j] = false;
            }
        }
    }
    cout<<4<<"reached "<<endl;
    for(int i=1;i<MAX;i++){
        if(isprime[i]){
            us.insert(i);
        }
    }
    cout<<5<<"reached "<<endl;
}
bool check(ll x,ll k){
    for(int i=1;i<=MAX;i++){
        ll xc=0;
        ll xk=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                xc++;
                if(us.find(j)!=us.end()){
                    xk++;
                }
            }
        }
        if(xc == x && xk==k){
            return true;
        }
        
    }
    return false;
}
int main(void){
    int t;
    cin>>t;
    cout<<1<<"reached "<<endl;
    makeprime();
    cout<<2<<"reached here"<<endl;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(check(x,k)){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
  return 0;
}